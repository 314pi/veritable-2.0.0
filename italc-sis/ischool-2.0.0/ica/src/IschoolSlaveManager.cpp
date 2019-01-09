/*
 * IschoolSlaveManager.cpp - IschoolSlaveManager which manages (GUI) slave apps
 *
 * Copyright (c) 2010-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 * Copyright (c) 2010 Univention GmbH
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

#include <QtCore/QCoreApplication>
#include <QtCore/QDir>
#include <QtCore/QTime>

#include "DesktopAccessPermission.h"
#include "IschoolConfiguration.h"
#include "IschoolCore.h"
#include "IschoolSlaveManager.h"
#include "LocalSystem.h"
#include "ScreenLockSlaveLauncher.h"

const Ipc::Id IschoolSlaveManager::IdCoreServer = "CoreServer";
const Ipc::Id IschoolSlaveManager::IdAccessDialog = "AccessDialog";
const Ipc::Id IschoolSlaveManager::IdDemoClient = "DemoClient";
const Ipc::Id IschoolSlaveManager::IdDemoServer = "DemoServer";
const Ipc::Id IschoolSlaveManager::IdMessageBox = "MessageBox";
const Ipc::Id IschoolSlaveManager::IdScreenLock = "ScreenLock";
const Ipc::Id IschoolSlaveManager::IdInputLock = "InputLock";
const Ipc::Id IschoolSlaveManager::IdSystemTrayIcon = "SystemTrayIcon";

const Ipc::Command IschoolSlaveManager::AccessDialog::Ask = "Ask";
const Ipc::Argument IschoolSlaveManager::AccessDialog::User = "User";
const Ipc::Argument IschoolSlaveManager::AccessDialog::Host = "Host";
const Ipc::Argument IschoolSlaveManager::AccessDialog::ChoiceFlags = "ChoiceFlags";
const Ipc::Command IschoolSlaveManager::AccessDialog::ReportChoice = "ReportChoice";

const Ipc::Command IschoolSlaveManager::DemoClient::StartDemo = "StartDemo";
const Ipc::Argument IschoolSlaveManager::DemoClient::MasterHost = "MasterHost";
const Ipc::Argument IschoolSlaveManager::DemoClient::FullScreen = "FullScreen";

const Ipc::Command IschoolSlaveManager::DemoServer::StartDemoServer = "StartDemoServer";
const Ipc::Argument IschoolSlaveManager::DemoServer::SourcePort = "SourcePort";
const Ipc::Argument IschoolSlaveManager::DemoServer::DestinationPort = "DestinationPort";
const Ipc::Argument IschoolSlaveManager::DemoServer::CommonSecret = "CommonSecret";

const Ipc::Command IschoolSlaveManager::DemoServer::UpdateAllowedHosts = "UpdateAllowedHosts";
const Ipc::Argument IschoolSlaveManager::DemoServer::AllowedHosts = "AllowedHosts";

const Ipc::Command IschoolSlaveManager::MessageBoxSlave::ShowMessageBox = "ShowMessageBox";
const Ipc::Argument IschoolSlaveManager::MessageBoxSlave::Text = "Text";

const Ipc::Command IschoolSlaveManager::SystemTrayIcon::SetToolTip = "SetToolTip";
const Ipc::Argument IschoolSlaveManager::SystemTrayIcon::ToolTipText = "ToolTipText";

const Ipc::Command IschoolSlaveManager::SystemTrayIcon::ShowMessage = "ShowMessage";
const Ipc::Argument IschoolSlaveManager::SystemTrayIcon::Title = "Title";
const Ipc::Argument IschoolSlaveManager::SystemTrayIcon::Text = "Text";



IschoolSlaveManager::IschoolSlaveManager() :
	Ipc::Master( QCoreApplication::applicationDirPath() +
					QDir::separator() + "ica" ),
	m_demoServerMaster( this )
{
}




IschoolSlaveManager::~IschoolSlaveManager()
{
}




void IschoolSlaveManager::startDemo( const QString &masterHost, bool fullscreen )
{
	Ipc::SlaveLauncher *slaveLauncher = NULL;
	if( fullscreen && IschoolCore::config->lockWithDesktopSwitching() )
	{
		slaveLauncher = new ScreenLockSlaveLauncher( applicationFilePath() );
	}
	createSlave( IdDemoClient, slaveLauncher );
	sendMessage( IdDemoClient,
					Ipc::Msg( DemoClient::StartDemo ).
						addArg( DemoClient::MasterHost, masterHost ).
						addArg( DemoClient::FullScreen, fullscreen ) );
}




void IschoolSlaveManager::stopDemo()
{
	stopSlave( IdDemoClient );
}




void IschoolSlaveManager::lockScreen()
{
	Ipc::SlaveLauncher *slaveLauncher = NULL;
	if( IschoolCore::config->lockWithDesktopSwitching() )
	{
		slaveLauncher = new ScreenLockSlaveLauncher( applicationFilePath() );
	}
	createSlave( IdScreenLock, slaveLauncher );
}




void IschoolSlaveManager::unlockScreen()
{
	stopSlave( IdScreenLock );
}




void IschoolSlaveManager::lockInput()
{
	createSlave( IdInputLock );
}




void IschoolSlaveManager::unlockInput()
{
	stopSlave( IdInputLock );
}




void IschoolSlaveManager::messageBox( const QString &msg )
{
	if( !isSlaveRunning( IdMessageBox ) )
	{
		createSlave( IdMessageBox );
	}
	sendMessage( IdMessageBox,
					Ipc::Msg( MessageBoxSlave::ShowMessageBox ).
						addArg( MessageBoxSlave::Text, msg ) );
}




void IschoolSlaveManager::systemTrayMessage( const QString &title,
										const QString &msg )
{
	if( IschoolCore::config->isTrayIconHidden() )
	{
		messageBox( msg );
		return;
	}
	if( !isSlaveRunning( IdSystemTrayIcon ) )
	{
		createSlave( IdSystemTrayIcon );
	}
	sendMessage( IdSystemTrayIcon,
					Ipc::Msg( SystemTrayIcon::ShowMessage ).
						addArg( SystemTrayIcon::Title, title ).
						addArg( SystemTrayIcon::Text, msg ) );
}




void IschoolSlaveManager::setSystemTrayToolTip( const QString &tooltip )
{
	if( IschoolCore::config->isTrayIconHidden() )
	{
		return;
	}
	if( !isSlaveRunning( IdSystemTrayIcon ) )
	{
		createSlave( IdSystemTrayIcon );
	}
	sendMessage( IdSystemTrayIcon,
					Ipc::Msg( SystemTrayIcon::SetToolTip ).
						addArg( SystemTrayIcon::ToolTipText, tooltip ) );
}




int IschoolSlaveManager::execAccessDialog( const QString &user,
											const QString &host,
											int choiceFlags )
{
	m_accessDialogChoice = -1;

	createSlave( IdAccessDialog );
	sendMessage( IdAccessDialog,
					Ipc::Msg( AccessDialog::Ask ).
						addArg( AccessDialog::User , user ).
						addArg( AccessDialog::Host, host ).
						addArg( AccessDialog::ChoiceFlags, choiceFlags ) );

	// wait for answer
	QTime t;
	t.start();
	while( m_accessDialogChoice < 0 )
	{
		QCoreApplication::processEvents();
		if( t.elapsed() > 30000 )
		{
			stopSlave( IdAccessDialog );
			return DesktopAccessPermission::ChoiceNo;
		}
	}

	return m_accessDialogChoice;
}




int IschoolSlaveManager::slaveStateFlags()
{
	int s = 0;
#define GEN_SLAVE_STATE_SETTER(x)				\
			if( isSlaveRunning( Id##x ) )		\
			{									\
				s |= IschoolCore::x##Running;		\
			}
	GEN_SLAVE_STATE_SETTER(AccessDialog)
	GEN_SLAVE_STATE_SETTER(DemoServer)
	GEN_SLAVE_STATE_SETTER(DemoClient)
	GEN_SLAVE_STATE_SETTER(ScreenLock)
	GEN_SLAVE_STATE_SETTER(InputLock)
	GEN_SLAVE_STATE_SETTER(SystemTrayIcon)
	GEN_SLAVE_STATE_SETTER(MessageBox)

	return s;
}



void IschoolSlaveManager::createSlave( const Ipc::Id &id, Ipc::SlaveLauncher *slaveLauncher )
{
	// only launch interactive iSCHOOL slaves (screen lock, demo, message box,
	// access dialog) if a user is logged on - prevents us from messing up logon
	// dialog on Windows
	if( id == IdSystemTrayIcon ||
			!LocalSystem::User::loggedOnUser().name().isEmpty() )
	{
		Ipc::Master::createSlave( id, slaveLauncher );
	}
	else
	{
		qDebug() << "IschoolSlaveManager: not creating slave" << id
					<< "as no user is logged on.";
	}
}



bool IschoolSlaveManager::handleMessage( const Ipc::Id &slaveId, const Ipc::Msg &m )
{
	if( slaveId == IdAccessDialog )
	{
		if( m.cmd() == AccessDialog::ReportChoice )
		{
			m_accessDialogChoice = m.arg( AccessDialog::ChoiceFlags ).toInt();
			return true;
		}
	}
	return false;
}

