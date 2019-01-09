/*
 * VeritableCoreServer.cpp - VeritableCoreServer
 *
 * Copyright (c) 2006-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of vERITABLE - http://veritable.sourceforge.net
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


#include <veritableconfig.h>

#ifdef VERITABLE_BUILD_WIN32
#define _WIN32_WINNT 0x0501
#include <windows.h>
#include <psapi.h>
#endif

#include <QtCore/QCoreApplication>
#include <QtNetwork/QHostInfo>

#include "VeritableCoreServer.h"
#include "DesktopAccessPermission.h"
#include "DsaKey.h"
#include "VeritableRfbExt.h"
#include "LocalSystem.h"


VeritableCoreServer * VeritableCoreServer::_this = NULL;


VeritableCoreServer::VeritableCoreServer() :
	QObject(),
	m_allowedIPs(),
	m_slaveManager()
{
	Q_ASSERT( _this == NULL );
	_this = this;
}




VeritableCoreServer::~VeritableCoreServer()
{
	_this = NULL;
}




int VeritableCoreServer::handleVeritableClientMessage( socketDispatcher sock,
												void *user )
{
	SocketDevice sdev( sock, user );

	// receive message
	VeritableCore::Msg msgIn( &sdev );
	msgIn.receive();

	qDebug() << "VeritableCoreServer: received message" << msgIn.cmd()
					<< "with arguments" << msgIn.args();

	const QString cmd = msgIn.cmd();
	if( cmd == VeritableCore::GetUserInformation )
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
		VeritableCore::Msg( &sdev, VeritableCore::UserInformation ).
					addArg( "username", currentUsername ).
					addArg( "homedir", user.homePath() ).
									send();
	}
	else if( cmd == VeritableCore::ExecCmds )
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
#ifdef VERITABLE_BUILD_WIN32
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
	else if( cmd == VeritableCore::LogonUserCmd )
	{
		LocalSystem::logonUser( msgIn.arg( "uname" ),
					msgIn.arg( "passwd" ),
					msgIn.arg( "domain" ) );
	}
	else if( cmd == VeritableCore::LogoutUser )
	{
		LocalSystem::logoutUser();
	}
	else if( cmd == VeritableCore::PowerOnComputer )
	{
		LocalSystem::broadcastWOLPacket( msgIn.arg( "mac" ) );
	}
	else if( cmd == VeritableCore::PowerDownComputer )
	{
		LocalSystem::powerDown();
	}
	else if( cmd == VeritableCore::RestartComputer )
	{
		LocalSystem::reboot();
	}
	else if( cmd == VeritableCore::DisableLocalInputs )
	{
		// TODO
		//LocalSystem::disableLocalInputs( msgIn.arg( "disabled" ).toInt() );
	}
	else if( cmd == VeritableCore::SetRole )
	{
		const int role = msgIn.arg( "role" ).toInt();
		if( role > VeritableCore::RoleNone && role < VeritableCore::RoleCount )
		{
			VeritableCore::role = static_cast<VeritableCore::UserRoles>( role );
		}
	}
	else if( cmd == VeritableCore::StartDemo )
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
	else if( cmd == VeritableCore::StopDemo )
	{
		m_slaveManager.stopDemo();
	}
	else if( cmd == VeritableCore::DisplayTextMessage )
	{
		m_slaveManager.messageBox( msgIn.arg( "text" ) );
	}
	else if( cmd == VeritableCore::LockScreen )
	{
		m_slaveManager.lockScreen();
	}
	else if( cmd == VeritableCore::UnlockScreen )
	{
		m_slaveManager.unlockScreen();
	}
	else if( cmd == VeritableCore::LockInput )
	{
		m_slaveManager.lockInput();
	}
	else if( cmd == VeritableCore::UnlockInput )
	{
		m_slaveManager.unlockInput();
	}
	else if( cmd == VeritableCore::StartDemoServer )
	{
		VeritableCore::authenticationCredentials->setCommonSecret(
									DsaKey::generateChallenge().toBase64() );
		m_slaveManager.demoServerMaster()->start(
			msgIn.arg( "sourceport" ).toInt(),
			msgIn.arg( "destinationport" ).toInt() );
	}
	else if( cmd == VeritableCore::StopDemoServer )
	{
		m_slaveManager.demoServerMaster()->stop();
	}
	else if( cmd == VeritableCore::DemoServerAllowHost )
	{
		m_slaveManager.demoServerMaster()->allowHost( msgIn.arg( "host" ) );
	}
	else if( cmd == VeritableCore::DemoServerUnallowHost )
	{
		m_slaveManager.demoServerMaster()->unallowHost( msgIn.arg( "host" ) );
	}
	else if( cmd == VeritableCore::ReportSlaveStateFlags )
	{
		VeritableCore::Msg( &sdev, cmd ).
				addArg( "slavestateflags", m_slaveManager.slaveStateFlags() ).
					send();
	}
	// TODO: handle plugins
	else
	{
		qCritical() << "VeritableCoreServer::handleVeritableClientMessage(...): "
				"could not handle cmd" << cmd;
	}

	return true;
}



bool VeritableCoreServer::authSecTypeVeritable( socketDispatcher sd, void *user )
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
	supportedAuthTypes["VeritableAuthDSA"] = VeritableAuthDSA;
	supportedAuthTypes["VeritableAuthHostBased"] = VeritableAuthHostBased;
	if( VeritableCore::authenticationCredentials->hasCredentials(
									AuthenticationCredentials::CommonSecret ) )
	{
		supportedAuthTypes["VeritableAuthCommonSecret"] = VeritableAuthCommonSecret;
	}
	sdev.write( supportedAuthTypes );

	uint32_t result = rfbVncAuthFailed;
	VeritableAuthTypes chosen = static_cast<VeritableAuthTypes>( sdev.read().toInt() );
	if( !supportedAuthTypes.values().contains( chosen ) )
	{
		errorMsgAuth( host );
		qCritical( "VeritableCoreServer::authSecTypeVeritable(...): "
				"client chose unsupported authentication type!" );
		return result;
	}

	const QString username = sdev.read().toString();

	switch( chosen )
	{
		// no authentication
		case VeritableAuthNone:
			result = rfbVncAuthOK;
			break;

		// host has to be in list of allowed hosts
		case VeritableAuthHostBased:
			if( doHostBasedAuth( host ) )
			{
				result = rfbVncAuthOK;
			}
			break;

		// authentication via DSA-challenge/-response
		case VeritableAuthDSA:
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

		case VeritableAuthCommonSecret:
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
				chosen != VeritableAuthHostBased )
		{
			errorMsgAuth( host );
		}
		qWarning() << "VeritableCoreServer::authSecTypeVeritable(): failed "
						"authenticating client" << host;
		return false;
	}

	return true;
}




void VeritableCoreServer::errorMsgAuth( const QString &ip )
{
	_this->m_slaveManager.systemTrayMessage(
			tr( "Authentication error" ),
			tr( "Somebody (IP: %1) tried to access this computer "
					"but could not authenticate itself "
					"successfully!" ).arg( ip ) );
}




bool VeritableCoreServer::doKeyBasedAuth( SocketDevice &sdev, const QString &host )
{
	// generate data to sign and send to client
	const QByteArray chall = DsaKey::generateChallenge();
	sdev.write( QVariant( chall ) );

	// get user-role
	const VeritableCore::UserRoles urole =
				static_cast<VeritableCore::UserRoles>( sdev.read().toInt() );
#if 0
	if( VeritableCore::role != VeritableCore::RoleOther &&
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
				case VeritableSlaveManager::AccessAlways:
					m_manuallyAllowedHosts += host;
				case VeritableSlaveManager::AccessYes:
					break;
				case VeritableSlaveManager::AccessNever:
					m_manuallyDeniedHosts += host;
				case VeritableSlaveManager::AccessNo:
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




bool VeritableCoreServer::doHostBasedAuth( const QString &host )
{
	qDebug() << "VeritableCoreServer: doing host based auth for host" << host;

	if( m_allowedIPs.isEmpty() )
	{
		qWarning() << "VeritableCoreServer: empty list of allowed IPs";
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

	qWarning() << "VeritableCoreServer::doHostBasedAuth() failed for host " << host;

	// host-based authentication failed
	return false;
}




bool VeritableCoreServer::doCommonSecretAuth( SocketDevice &sdev )
{
	qDebug() << "VeritableCoreServer: doing common secret auth";

	const QString secret = sdev.read().toString();
	if( secret == VeritableCore::authenticationCredentials->commonSecret() )
	{
		return true;
	}

	return false;
}

