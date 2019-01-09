/*
 * VeritableCoreConnection.cpp - implementation of VeritableCoreConnection
 *
 * Copyright (c) 2008-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include "VeritableCoreConnection.h"
#include "Logger.h"
#include "SocketDevice.h"


class VeritableMessageEvent : public ClientEvent
{
public:
	VeritableMessageEvent( const VeritableCore::Msg &m ) :
		m_msg( m )
	{
	}

	virtual void fire( rfbClient *client )
	{
		SocketDevice socketDev( libvncClientDispatcher, client );
		m_msg.setSocketDevice( &socketDev );
		qDebug() << "VeritableMessageEvent::fire(): sending message" << m_msg.cmd()
					<< "with arguments" << m_msg.args();
		m_msg.send();
	}


private:
	VeritableCore::Msg m_msg;

} ;



static rfbClientProtocolExtension * __veritableProtocolExt = NULL;
static void * VeritableCoreConnectionTag = (void *) PortOffsetVncServer; // an unique ID



VeritableCoreConnection::VeritableCoreConnection( VeritableVncConnection *vncConn ):
	m_vncConn( vncConn ),
	m_user(),
	m_userHomeDir(),
	m_slaveStateFlags( 0 )
{
	if( __veritableProtocolExt == NULL )
	{
		__veritableProtocolExt = new rfbClientProtocolExtension;
		__veritableProtocolExt->encodings = NULL;
		__veritableProtocolExt->handleEncoding = NULL;
		__veritableProtocolExt->handleMessage = handleVeritableMessage;

		rfbClientRegisterExtension( __veritableProtocolExt );
	}

	connect( m_vncConn, SIGNAL( newClient( rfbClient * ) ),
			this, SLOT( initNewClient( rfbClient * ) ),
							Qt::DirectConnection );
}




VeritableCoreConnection::~VeritableCoreConnection()
{
	if( m_vncConn )
	{
		m_vncConn->stop();
		m_vncConn = NULL;
	}
}




void VeritableCoreConnection::initNewClient( rfbClient *cl )
{
	rfbClientSetClientData( cl, VeritableCoreConnectionTag, this );
}




rfbBool VeritableCoreConnection::handleVeritableMessage( rfbClient *cl,
						rfbServerToClientMsg * msg )
{
	VeritableCoreConnection * icc = (VeritableCoreConnection *)
				rfbClientGetClientData( cl, VeritableCoreConnectionTag );
	if( icc )
	{
		return icc->handleServerMessage( cl, msg->type );
	}

	return false;
}




bool VeritableCoreConnection::handleServerMessage( rfbClient *cl, uint8_t msg )
{
	if( msg == rfbVeritableCoreResponse )
	{
		SocketDevice socketDev( libvncClientDispatcher, cl );
		VeritableCore::Msg m( &socketDev );

		m.receive();
		qDebug() << "VeritableCoreConnection: received message" << m.cmd()
					<< "with arguments" << m.args();

		if( m.cmd() == VeritableCore::UserInformation )
		{
			m_user = m.arg( "username" );
			m_userHomeDir = m.arg( "homedir" );
		}
		else if( m.cmd() == VeritableCore::ReportSlaveStateFlags )
		{
			m_slaveStateFlags = m.arg( "slavestateflags" ).toInt();
		}
		// TODO: plugin hook
		else
		{
			qCritical() << "VeritableCoreConnection::"
				"handleServerMessage(): unknown server "
				"response" << m.cmd();
			return false;
		}
	}
	else
	{
		qCritical( "VeritableCoreConnection::handleServerMessage(): "
				"unknown message type %d from server. Closing "
				"connection. Will re-open it later.", msg );
		return false;
	}

	return true;
}




void VeritableCoreConnection::sendGetUserInformationRequest()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::GetUserInformation ) );
}




void VeritableCoreConnection::execCmds( const QString &cmd )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::ExecCmds ).
						addArg( "cmds", cmd ) );
}




void VeritableCoreConnection::startDemo( const QString &host, int port,
										bool fullscreen )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::StartDemo ).
					addArg( "host", host ).
					addArg( "port", port ).
					addArg( "fullscreen", fullscreen ) );
}




void VeritableCoreConnection::stopDemo()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::StopDemo ) );
}




void VeritableCoreConnection::lockScreen()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::LockScreen ) );
}




void VeritableCoreConnection::unlockScreen()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::UnlockScreen ) );
}




void VeritableCoreConnection::lockInput()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::LockInput ) );
}




void VeritableCoreConnection::unlockInput()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::UnlockInput ) );
}




void VeritableCoreConnection::logonUser( const QString &uname,
						const QString &pw,
						const QString &domain )
{
/*	enqueueMessage( VeritableCore::Msg( VeritableCore::LogonUserCmd ).
						addArg( "uname", uname ).
						addArg( "passwd", pw ).
						addArg( "domain", domain ) );*/
}




void VeritableCoreConnection::logoutUser()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::LogoutUser ) );
}




void VeritableCoreConnection::displayTextMessage( const QString &msg )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::DisplayTextMessage ).
						addArg( "text", msg ) );
}




void VeritableCoreConnection::powerOnComputer( const QString &mac )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::PowerOnComputer ).
						addArg( "mac",mac ) );
}




void VeritableCoreConnection::powerDownComputer()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::PowerDownComputer ) );
}




void VeritableCoreConnection::restartComputer()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::RestartComputer ) );
}




void VeritableCoreConnection::disableLocalInputs( bool disabled )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::DisableLocalInputs ).
					addArg( "disabled", disabled ) );
}




void VeritableCoreConnection::setRole( const VeritableCore::UserRole role )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::SetRole ).
						addArg( "role", role ) );
}




void VeritableCoreConnection::startDemoServer( int sourcePort, int destinationPort )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::StartDemoServer ).
						addArg( "sourceport", sourcePort ).
						addArg( "destinationport", destinationPort ) );
}




void VeritableCoreConnection::stopDemoServer()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::StopDemoServer ) );
}




void VeritableCoreConnection::demoServerAllowHost( const QString &host )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::DemoServerAllowHost ).
						addArg( "host", host ) );
}




void VeritableCoreConnection::demoServerUnallowHost( const QString &host )
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::DemoServerUnallowHost ).
						addArg( "host", host ) );
}




void VeritableCoreConnection::reportSlaveStateFlags()
{
	enqueueMessage( VeritableCore::Msg( VeritableCore::ReportSlaveStateFlags ) );
}



void VeritableCoreConnection::enqueueMessage( const VeritableCore::Msg &msg )
{
	VeritableCore::Msg m( msg );
	m_vncConn->enqueueEvent( new VeritableMessageEvent( m ) );
}


