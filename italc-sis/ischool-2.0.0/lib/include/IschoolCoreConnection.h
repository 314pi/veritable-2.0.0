/*
 * IschoolCoreConnection.h - declaration of class IschoolCoreConnection
 *
 * Copyright (c) 2008-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#ifndef _ISCHOOL_CORE_CONNECTION_H
#define _ISCHOOL_CORE_CONNECTION_H

#include "IschoolCore.h"
#include "IschoolVncConnection.h"


class IschoolCoreConnection : public QObject
{
	Q_OBJECT
public:
	IschoolCoreConnection( IschoolVncConnection *vncConnection );
	~IschoolCoreConnection();

	IschoolVncConnection *vncConnection()
	{
		return m_vncConn;
	}

	IschoolVncConnection::State state() const
	{
		return m_vncConn->state();
	}

	inline bool isConnected() const
	{
		return m_vncConn->isConnected();
	}

	inline const QString & user() const
	{
		return m_user;
	}

	inline const QString & userHomeDir() const
	{
		return m_userHomeDir;
	}

	int slaveStateFlags() const
	{
		return m_slaveStateFlags;
	}

#define GEN_SLAVE_STATE_HELPER(x)							\
			bool is##x() const								\
			{												\
				return slaveStateFlags() & IschoolCore::x;	\
			}

	GEN_SLAVE_STATE_HELPER(DemoServerRunning)
	GEN_SLAVE_STATE_HELPER(DemoClientRunning)
	GEN_SLAVE_STATE_HELPER(ScreenLockRunning)
	GEN_SLAVE_STATE_HELPER(InputLockRunning)
	GEN_SLAVE_STATE_HELPER(SystemTrayIconRunning)
	GEN_SLAVE_STATE_HELPER(MessageBoxRunning)

	void sendGetUserInformationRequest();
	void execCmds( const QString &cmd );
	void startDemo( const QString &host, int port, bool fullscreen = false );
	void stopDemo();
	void lockScreen();
	void unlockScreen();
	void lockInput();
	void unlockInput();
	void logonUser( const QString &uname, const QString &pw,
						const QString &domain );
	void logoutUser();
	void displayTextMessage( const QString &msg );

	void powerOnComputer( const QString &mac );
	void powerDownComputer();
	void restartComputer();
	void disableLocalInputs( bool disabled );

	void setRole( const IschoolCore::UserRole role );

	void startDemoServer( int sourcePort, int destinationPort );
	void stopDemoServer();
	void demoServerAllowHost( const QString &host );
	void demoServerUnallowHost( const QString &host );

	void reportSlaveStateFlags();


private slots:
	void initNewClient( rfbClient *client );


private:
	static rfbBool handleIschoolMessage( rfbClient *cl,
						rfbServerToClientMsg *msg );

	bool handleServerMessage( rfbClient *cl, uint8_t msg );
	void enqueueMessage( const IschoolCore::Msg &msg );


	IschoolVncConnection *m_vncConn;

	QString m_user;
	QString m_userHomeDir;

	int m_slaveStateFlags;

} ;


#endif
