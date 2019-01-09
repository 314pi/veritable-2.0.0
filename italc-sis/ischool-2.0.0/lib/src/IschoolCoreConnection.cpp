/*
 * IschoolCoreConnection.cpp - implementation of IschoolCoreConnection
 *
 * Copyright (c) 2008-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include "IschoolCoreConnection.h"
#include "Logger.h"
#include "SocketDevice.h"


class IschoolMessageEvent : public ClientEvent
{
public:
	IschoolMessageEvent( const IschoolCore::Msg &m ) :
		m_msg( m )
	{
	}

	virtual void fire( rfbClient *client )
	{
		SocketDevice socketDev( libvncClientDispatcher, client );
		m_msg.setSocketDevice( &socketDev );
		qDebug() << "IschoolMessageEvent::fire(): sending message" << m_msg.cmd()
					<< "with arguments" << m_msg.args();
		m_msg.send();
	}


private:
	IschoolCore::Msg m_msg;

} ;



static rfbClientProtocolExtension * __ischoolProtocolExt = NULL;
static void * IschoolCoreConnectionTag = (void *) PortOffsetVncServer; // an unique ID



IschoolCoreConnection::IschoolCoreConnection( IschoolVncConnection *vncConn ):
	m_vncConn( vncConn ),
	m_user(),
	m_userHomeDir(),
	m_slaveStateFlags( 0 )
{
	if( __ischoolProtocolExt == NULL )
	{
		__ischoolProtocolExt = new rfbClientProtocolExtension;
		__ischoolProtocolExt->encodings = NULL;
		__ischoolProtocolExt->handleEncoding = NULL;
		__ischoolProtocolExt->handleMessage = handleIschoolMessage;

		rfbClientRegisterExtension( __ischoolProtocolExt );
	}

	connect( m_vncConn, SIGNAL( newClient( rfbClient * ) ),
			this, SLOT( initNewClient( rfbClient * ) ),
							Qt::DirectConnection );
}




IschoolCoreConnection::~IschoolCoreConnection()
{
	if( m_vncConn )
	{
		m_vncConn->stop();
		m_vncConn = NULL;
	}
}




void IschoolCoreConnection::initNewClient( rfbClient *cl )
{
	rfbClientSetClientData( cl, IschoolCoreConnectionTag, this );
}




rfbBool IschoolCoreConnection::handleIschoolMessage( rfbClient *cl,
						rfbServerToClientMsg * msg )
{
	IschoolCoreConnection * icc = (IschoolCoreConnection *)
				rfbClientGetClientData( cl, IschoolCoreConnectionTag );
	if( icc )
	{
		return icc->handleServerMessage( cl, msg->type );
	}

	return false;
}




bool IschoolCoreConnection::handleServerMessage( rfbClient *cl, uint8_t msg )
{
	if( msg == rfbIschoolCoreResponse )
	{
		SocketDevice socketDev( libvncClientDispatcher, cl );
		IschoolCore::Msg m( &socketDev );

		m.receive();
		qDebug() << "IschoolCoreConnection: received message" << m.cmd()
					<< "with arguments" << m.args();

		if( m.cmd() == IschoolCore::UserInformation )
		{
			m_user = m.arg( "username" );
			m_userHomeDir = m.arg( "homedir" );
		}
		else if( m.cmd() == IschoolCore::ReportSlaveStateFlags )
		{
			m_slaveStateFlags = m.arg( "slavestateflags" ).toInt();
		}
		// TODO: plugin hook
		else
		{
			qCritical() << "IschoolCoreConnection::"
				"handleServerMessage(): unknown server "
				"response" << m.cmd();
			return false;
		}
	}
	else
	{
		qCritical( "IschoolCoreConnection::handleServerMessage(): "
				"unknown message type %d from server. Closing "
				"connection. Will re-open it later.", msg );
		return false;
	}

	return true;
}




void IschoolCoreConnection::sendGetUserInformationRequest()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::GetUserInformation ) );
}




void IschoolCoreConnection::execCmds( const QString &cmd )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::ExecCmds ).
						addArg( "cmds", cmd ) );
}




void IschoolCoreConnection::startDemo( const QString &host, int port,
										bool fullscreen )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::StartDemo ).
					addArg( "host", host ).
					addArg( "port", port ).
					addArg( "fullscreen", fullscreen ) );
}




void IschoolCoreConnection::stopDemo()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::StopDemo ) );
}




void IschoolCoreConnection::lockScreen()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::LockScreen ) );
}




void IschoolCoreConnection::unlockScreen()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::UnlockScreen ) );
}




void IschoolCoreConnection::lockInput()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::LockInput ) );
}




void IschoolCoreConnection::unlockInput()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::UnlockInput ) );
}




void IschoolCoreConnection::logonUser( const QString &uname,
						const QString &pw,
						const QString &domain )
{
/*	enqueueMessage( IschoolCore::Msg( IschoolCore::LogonUserCmd ).
						addArg( "uname", uname ).
						addArg( "passwd", pw ).
						addArg( "domain", domain ) );*/
}




void IschoolCoreConnection::logoutUser()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::LogoutUser ) );
}




void IschoolCoreConnection::displayTextMessage( const QString &msg )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::DisplayTextMessage ).
						addArg( "text", msg ) );
}




void IschoolCoreConnection::powerOnComputer( const QString &mac )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::PowerOnComputer ).
						addArg( "mac",mac ) );
}




void IschoolCoreConnection::powerDownComputer()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::PowerDownComputer ) );
}




void IschoolCoreConnection::restartComputer()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::RestartComputer ) );
}




void IschoolCoreConnection::disableLocalInputs( bool disabled )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::DisableLocalInputs ).
					addArg( "disabled", disabled ) );
}




void IschoolCoreConnection::setRole( const IschoolCore::UserRole role )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::SetRole ).
						addArg( "role", role ) );
}




void IschoolCoreConnection::startDemoServer( int sourcePort, int destinationPort )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::StartDemoServer ).
						addArg( "sourceport", sourcePort ).
						addArg( "destinationport", destinationPort ) );
}




void IschoolCoreConnection::stopDemoServer()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::StopDemoServer ) );
}




void IschoolCoreConnection::demoServerAllowHost( const QString &host )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::DemoServerAllowHost ).
						addArg( "host", host ) );
}




void IschoolCoreConnection::demoServerUnallowHost( const QString &host )
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::DemoServerUnallowHost ).
						addArg( "host", host ) );
}




void IschoolCoreConnection::reportSlaveStateFlags()
{
	enqueueMessage( IschoolCore::Msg( IschoolCore::ReportSlaveStateFlags ) );
}



void IschoolCoreConnection::enqueueMessage( const IschoolCore::Msg &msg )
{
	IschoolCore::Msg m( msg );
	m_vncConn->enqueueEvent( new IschoolMessageEvent( m ) );
}


