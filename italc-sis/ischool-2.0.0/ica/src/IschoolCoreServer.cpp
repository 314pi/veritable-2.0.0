/*
 * IschoolCoreServer.cpp - IschoolCoreServer
 *
 * Copyright (c) 2006-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of iSCHOOL - http://ischool.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */


#include <ischoolconfig.h>

#ifdef ISCHOOL_BUILD_WIN32
#define _WIN32_WINNT 0x0501
#include <windows.h>
#include <psapi.h>
#endif

#include <QtCore/QCoreApplication>
#include <QtNetwork/QHostInfo>

#include "IschoolCoreServer.h"
#include "DesktopAccessPermission.h"
#include "DsaKey.h"
#include "IschoolRfbExt.h"
#include "LocalSystem.h"


IschoolCoreServer * IschoolCoreServer::_this = NULL;


IschoolCoreServer::IschoolCoreServer() :
	QObject(),
	m_allowedIPs(),
	m_slaveManager()
{
	Q_ASSERT( _this == NULL );
	_this = this;
}




IschoolCoreServer::~IschoolCoreServer()
{
	_this = NULL;
}




int IschoolCoreServer::handleIschoolClientMessage( socketDispatcher sock,
												void *user )
{
	SocketDevice sdev( sock, user );

	// receive message
	IschoolCore::Msg msgIn( &sdev );
	msgIn.receive();

	qDebug() << "IschoolCoreServer: received message" << msgIn.cmd()
					<< "with arguments" << msgIn.args();

	const QString cmd = msgIn.cmd();
	if( cmd == IschoolCore::GetUserInformation )
	{
		static QString lastUserName, lastFullUsername;

		LocalSystem::User user = LocalSystem::User::loggedOnUser();
		QString currentUsername = user.name();
		if( lastUserName != currentUsername )
		{
			lastUserName = currentUsername;
			lastFullUsername = user.fullName();
		}
		if( !lastFullUsername.isEmpty() &&
				currentUsername != lastFullUsername )
		{
			currentUsername = QString( "%1 (%2)" ).arg( currentUsername ).
									arg( lastFullUsername );
		}
		IschoolCore::Msg( &sdev, IschoolCore::UserInformation ).
					addArg( "username", currentUsername ).
					addArg( "homedir", user.homePath() ).
									send();
	}
	else if( cmd == IschoolCore::ExecCmds )
	{
		const QString cmds = msgIn.arg( "cmds" );
		if( !cmds.isEmpty() )
		{
			LocalSystem::User user = LocalSystem::User::loggedOnUser();
			LocalSystem::Process proc(
				LocalSystem::Process::findProcessId( QString(), -1, &user ) );

			foreach( const QString & cmd, cmds.split( '\n' ) )
			{
				LocalSystem::Process::Handle hProcess =
					proc.runAsUser( cmd,
						LocalSystem::Desktop::activeDesktop().name() );
#ifdef ISCHOOL_BUILD_WIN32
				if( hProcess )
				{
					CloseHandle( hProcess );
				}
#else
				(void) hProcess;
#endif
			}
		}
	}
	else if( cmd == IschoolCore::LogonUserCmd )
	{
		LocalSystem::logonUser( msgIn.arg( "uname" ),
					msgIn.arg( "passwd" ),
					msgIn.arg( "domain" ) );
	}
	else if( cmd == IschoolCore::LogoutUser )
	{
		LocalSystem::logoutUser();
	}
	else if( cmd == IschoolCore::PowerOnComputer )
	{
		LocalSystem::broadcastWOLPacket( msgIn.arg( "mac" ) );
	}
	else if( cmd == IschoolCore::PowerDownComputer )
	{
		LocalSystem::powerDown();
	}
	else if( cmd == IschoolCore::RestartComputer )
	{
		LocalSystem::reboot();
	}
	else if( cmd == IschoolCore::DisableLocalInputs )
	{
		// TODO
		//LocalSystem::disableLocalInputs( msgIn.arg( "disabled" ).toInt() );
	}
	else if( cmd == IschoolCore::SetRole )
	{
		const int role = msgIn.arg( "role" ).toInt();
		if( role > IschoolCore::RoleNone && role < IschoolCore::RoleCount )
		{
			IschoolCore::role = static_cast<IschoolCore::UserRoles>( role );
		}
	}
	else if( cmd == IschoolCore::StartDemo )
	{
		QString host = msgIn.arg( "host" );
		QString port = msgIn.arg( "port" );
		// no host given?
		if( host.isEmpty() )
		{
			// then guess IP from remote peer address
			const int MAX_HOST_LEN = 255;
			char hostArr[MAX_HOST_LEN+1];
			sock( hostArr, MAX_HOST_LEN, SocketGetPeerAddress, user );
			hostArr[MAX_HOST_LEN] = 0;
			host = hostArr;
		}
		if( port.isEmpty() )
		{
			port = QString::number( PortOffsetDemoServer );
		}
		if( !host.contains( ':' ) )
		{
			host += ':' + port;
		}
		m_slaveManager.startDemo( host, msgIn.arg( "fullscreen" ).toInt() );
	}
	else if( cmd == IschoolCore::StopDemo )
	{
		m_slaveManager.stopDemo();
	}
	else if( cmd == IschoolCore::DisplayTextMessage )
	{
		m_slaveManager.messageBox( msgIn.arg( "text" ) );
	}
	else if( cmd == IschoolCore::LockScreen )
	{
		m_slaveManager.lockScreen();
	}
	else if( cmd == IschoolCore::UnlockScreen )
	{
		m_slaveManager.unlockScreen();
	}
	else if( cmd == IschoolCore::LockInput )
	{
		m_slaveManager.lockInput();
	}
	else if( cmd == IschoolCore::UnlockInput )
	{
		m_slaveManager.unlockInput();
	}
	else if( cmd == IschoolCore::StartDemoServer )
	{
		IschoolCore::authenticationCredentials->setCommonSecret(
									DsaKey::generateChallenge().toBase64() );
		m_slaveManager.demoServerMaster()->start(
			msgIn.arg( "sourceport" ).toInt(),
			msgIn.arg( "destinationport" ).toInt() );
	}
	else if( cmd == IschoolCore::StopDemoServer )
	{
		m_slaveManager.demoServerMaster()->stop();
	}
	else if( cmd == IschoolCore::DemoServerAllowHost )
	{
		m_slaveManager.demoServerMaster()->allowHost( msgIn.arg( "host" ) );
	}
	else if( cmd == IschoolCore::DemoServerUnallowHost )
	{
		m_slaveManager.demoServerMaster()->unallowHost( msgIn.arg( "host" ) );
	}
	else if( cmd == IschoolCore::ReportSlaveStateFlags )
	{
		IschoolCore::Msg( &sdev, cmd ).
				addArg( "slavestateflags", m_slaveManager.slaveStateFlags() ).
					send();
	}
	// TODO: handle plugins
	else
	{
		qCritical() << "IschoolCoreServer::handleIschoolClientMessage(...): "
				"could not handle cmd" << cmd;
	}

	return true;
}



bool IschoolCoreServer::authSecTypeIschool( socketDispatcher sd, void *user )
{
	QMutexLocker l( &m_dataMutex );

	// find out IP of host - needed at several places
	const int MAX_HOST_LEN = 255;
	char host[MAX_HOST_LEN+1];
	sd( host, MAX_HOST_LEN, SocketGetPeerAddress, user );
	host[MAX_HOST_LEN] = 0;

	SocketDevice sdev( sd, user );

	// send list of supported authentication types - can't use QList<QVariant>
	// here due to a strange bug in Qt
	QMap<QString, QVariant> supportedAuthTypes;
	supportedAuthTypes["IschoolAuthDSA"] = IschoolAuthDSA;
	supportedAuthTypes["IschoolAuthHostBased"] = IschoolAuthHostBased;
	if( IschoolCore::authenticationCredentials->hasCredentials(
									AuthenticationCredentials::CommonSecret ) )
	{
		supportedAuthTypes["IschoolAuthCommonSecret"] = IschoolAuthCommonSecret;
	}
	sdev.write( supportedAuthTypes );

	uint32_t result = rfbVncAuthFailed;
	IschoolAuthTypes chosen = static_cast<IschoolAuthTypes>( sdev.read().toInt() );
	if( !supportedAuthTypes.values().contains( chosen ) )
	{
		errorMsgAuth( host );
		qCritical( "IschoolCoreServer::authSecTypeIschool(...): "
				"client chose unsupported authentication type!" );
		return result;
	}

	const QString username = sdev.read().toString();

	switch( chosen )
	{
		// no authentication
		case IschoolAuthNone:
			result = rfbVncAuthOK;
			break;

		// host has to be in list of allowed hosts
		case IschoolAuthHostBased:
			if( doHostBasedAuth( host ) )
			{
				result = rfbVncAuthOK;
			}
			break;

		// authentication via DSA-challenge/-response
		case IschoolAuthDSA:
			if( doKeyBasedAuth( sdev, host ) )
			{
				if( DesktopAccessPermission(
						DesktopAccessPermission::KeyAuthentication ).
							ask( username, host ) )
				{
					result = rfbVncAuthOK;
				}
			}
			break;

		case IschoolAuthCommonSecret:
			if( doCommonSecretAuth( sdev ) )
			{
				result = rfbVncAuthOK;
			}
			break;

		default:
			break;
	}

	if( result != rfbVncAuthOK )
	{
		// only report about failed authentications for hosts that are not
		// blacklisted already
		if( !m_manuallyDeniedHosts.contains( host ) &&
				chosen != IschoolAuthHostBased )
		{
			errorMsgAuth( host );
		}
		qWarning() << "IschoolCoreServer::authSecTypeIschool(): failed "
						"authenticating client" << host;
		return false;
	}

	return true;
}




void IschoolCoreServer::errorMsgAuth( const QString &ip )
{
	_this->m_slaveManager.systemTrayMessage(
			tr( "Authentication error" ),
			tr( "Somebody (IP: %1) tried to access this computer "
					"but could not authenticate itself "
					"successfully!" ).arg( ip ) );
}




bool IschoolCoreServer::doKeyBasedAuth( SocketDevice &sdev, const QString &host )
{
	// generate data to sign and send to client
	const QByteArray chall = DsaKey::generateChallenge();
	sdev.write( QVariant( chall ) );

	// get user-role
	const IschoolCore::UserRoles urole =
				static_cast<IschoolCore::UserRoles>( sdev.read().toInt() );
#if 0
	if( IschoolCore::role != IschoolCore::RoleOther &&
		host != QHostAddress( QHostAddress::LocalHost ).toString() )
	{
		if( m_manuallyDeniedHosts.contains( host ) )
		{
			return false;
		}
		if( !m_manuallyAllowedHosts.contains( host ) )
		{
			switch( m_slaveManager.execAccessDialog( host ) )
			{
				case IschoolSlaveManager::AccessAlways:
					m_manuallyAllowedHosts += host;
				case IschoolSlaveManager::AccessYes:
					break;
				case IschoolSlaveManager::AccessNever:
					m_manuallyDeniedHosts += host;
				case IschoolSlaveManager::AccessNo:
				default:
					return false;
			}
		}
	}
#endif

	// now try to verify received signed data using public key of the user
	// under which the client claims to run
	const QByteArray sig = sdev.read().toByteArray();

	qDebug() << "Loading public key" << LocalSystem::Path::publicKeyPath( urole )
				<< "for role" << urole;
	// (publicKeyPath does range-checking of urole)
	PublicDSAKey pubKey( LocalSystem::Path::publicKeyPath( urole ) );

	return pubKey.verifySignature( chall, sig );
}




bool IschoolCoreServer::doHostBasedAuth( const QString &host )
{
	qDebug() << "IschoolCoreServer: doing host based auth for host" << host;

	if( m_allowedIPs.isEmpty() )
	{
		qWarning() << "IschoolCoreServer: empty list of allowed IPs";
		return false;
	}

	// already valid IP?
	if( QHostAddress().setAddress( host ) )
	{
		if( m_allowedIPs.contains( host ) )
		{
			return true;
		}
	}
	else
	{
		// create a list of all known addresses of host
		QList<QHostAddress> addr = QHostInfo::fromName( host ).addresses();

		// check each address for existence in list of allowed clients
		foreach( const QHostAddress a, addr )
		{
			if( m_allowedIPs.contains( a.toString() ) ||
					a.toString() == QHostAddress( QHostAddress::LocalHost ).
																	toString() )
			{
				return true;
			}
		}
	}

	qWarning() << "IschoolCoreServer::doHostBasedAuth() failed for host " << host;

	// host-based authentication failed
	return false;
}




bool IschoolCoreServer::doCommonSecretAuth( SocketDevice &sdev )
{
	qDebug() << "IschoolCoreServer: doing common secret auth";

	const QString secret = sdev.read().toString();
	if( secret == IschoolCore::authenticationCredentials->commonSecret() )
	{
		return true;
	}

	return false;
}

