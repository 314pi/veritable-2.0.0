/*
 * VeritableSlaveManager.cpp - VeritableSlaveManager which manages (GUI) slave apps
 *
 * Copyright (c) 2010-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 * Copyright (c) 2010 Univention GmbH
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

#include <QtCore/QCoreApplication>
#include <QtCore/QDir>
#include <QtCore/QTime>

#include "DesktopAccessPermission.h"
#include "VeritableConfiguration.h"
#include "VeritableCore.h"
#include "VeritableSlaveManager.h"
#include "LocalSystem.h"
#include "ScreenLockSlaveLauncher.h"

const Ipc::Id VeritableSlaveManager::IdCoreServer = "CoreServer";
const Ipc::Id VeritableSlaveManager::IdAccessDialog = "AccessDialog";
const Ipc::Id VeritableSlaveManager::IdDemoClient = "DemoClient";
const Ipc::Id VeritableSlaveManager::IdDemoServer = "DemoServer";
const Ipc::Id VeritableSlaveManager::IdMessageBox = "MessageBox";
const Ipc::Id VeritableSlaveManager::IdScreenLock = "ScreenLock";
const Ipc::Id VeritableSlaveManager::IdInputLock = "InputLock";
const Ipc::Id VeritableSlaveManager::IdSystemTrayIcon = "SystemTrayIcon";

const Ipc::Command VeritableSlaveManager::AccessDialog::Ask = "Ask";
const Ipc::Argument VeritableSlaveManager::AccessDialog::User = "User";
const Ipc::Argument VeritableSlaveManager::AccessDialog::Host = "Host";
const Ipc::Argument VeritableSlaveManager::AccessDialog::ChoiceFlags = "ChoiceFlags";
const Ipc::Command VeritableSlaveManager::AccessDialog::ReportChoice = "ReportChoice";

const Ipc::Command VeritableSlaveManager::DemoClient::StartDemo = "StartDemo";
const Ipc::Argument VeritableSlaveManager::DemoClient::MasterHost = "MasterHost";
const Ipc::Argument VeritableSlaveManager::DemoClient::FullScreen = "FullScreen";

const Ipc::Command VeritableSlaveManager::DemoServer::StartDemoServer = "StartDemoServer";
const Ipc::Argument VeritableSlaveManager::DemoServer::SourcePort = "SourcePort";
const Ipc::Argument VeritableSlaveManager::DemoServer::DestinationPort = "DestinationPort";
const Ipc::Argument VeritableSlaveManager::DemoServer::CommonSecret = "CommonSecret";

const Ipc::Command VeritableSlaveManager::DemoServer::UpdateAllowedHosts = "UpdateAllowedHosts";
const Ipc::Argument VeritableSlaveManager::DemoServer::AllowedHosts = "AllowedHosts";

const Ipc::Command VeritableSlaveManager::MessageBoxSlave::ShowMessageBox = "ShowMessageBox";
const Ipc::Argument VeritableSlaveManager::MessageBoxSlave::Text = "Text";

const Ipc::Command VeritableSlaveManager::SystemTrayIcon::SetToolTip = "SetToolTip";
const Ipc::Argument VeritableSlaveManager::SystemTrayIcon::ToolTipText = "ToolTipText";

const Ipc::Command VeritableSlaveManager::SystemTrayIcon::ShowMessage = "ShowMessage";
const Ipc::Argument VeritableSlaveManager::SystemTrayIcon::Title = "Title";
const Ipc::Argument VeritableSlaveManager::SystemTrayIcon::Text = "Text";



VeritableSlaveManager::VeritableSlaveManager() :
	Ipc::Master( QCoreApplication::applicationDirPath() +
					QDir::separator() + "ica" ),
	m_demoServerMaster( this )
{
}




VeritableSlaveManager::~VeritableSlaveManager()
{
}




void VeritableSlaveManager::startDemo( const QString &masterHost, bool fullscreen )
{
	Ipc::SlaveLauncher *slaveLauncher = NULL;
	if( fullscreen && VeritableCore::config->lockWithDesktopSwitching() )
	{
		slaveLauncher = new ScreenLockSlaveLauncher( applicationFilePath() );
	}
	createSlave( IdDemoClient, slaveLauncher );
	sendMessage( IdDemoClient,
					Ipc::Msg( DemoClient::StartDemo ).
						addArg( DemoClient::MasterHost, masterHost ).
						addArg( DemoClient::FullScreen, fullscreen ) );
}




void VeritableSlaveManager::stopDemo()
{
	stopSlave( IdDemoClient );
}




void VeritableSlaveManager::lockScreen()
{
	Ipc::SlaveLauncher *slaveLauncher = NULL;
	if( VeritableCore::config->lockWithDesktopSwitching() )
	{
		slaveLauncher = new ScreenLockSlaveLauncher( applicationFilePath() );
	}
	createSlave( IdScreenLock, slaveLauncher );
}




void VeritableSlaveManager::unlockScreen()
{
	stopSlave( IdScreenLock );
}




void VeritableSlaveManager::lockInput()
{
	createSlave( IdInputLock );
}




void VeritableSlaveManager::unlockInput()
{
	stopSlave( IdInputLock );
}




void VeritableSlaveManager::messageBox( const QString &msg )
{
	if( !isSlaveRunning( IdMessageBox ) )
	{
		createSlave( IdMessageBox );
	}
	sendMessage( IdMessageBox,
					Ipc::Msg( MessageBoxSlave::ShowMessageBox ).
						addArg( MessageBoxSlave::Text, msg ) );
}




void VeritableSlaveManager::systemTrayMessage( const QString &title,
										const QString &msg )
{
	if( VeritableCore::config->isTrayIconHidden() )
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




void VeritableSlaveManager::setSystemTrayToolTip( const QString &tooltip )
{
	if( VeritableCore::config->isTrayIconHidden() )
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




int VeritableSlaveManager::execAccessDialog( const QString &user,
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




int VeritableSlaveManager::slaveStateFlags()
{
	int s = 0;
#define GEN_SLAVE_STATE_SETTER(x)				\
			if( isSlaveRunning( Id##x ) )		\
			{									\
				s |= VeritableCore::x##Running;		\
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



void VeritableSlaveManager::createSlave( const Ipc::Id &id, Ipc::SlaveLauncher *slaveLauncher )
{
	// only launch interactive vERITABLE slaves (screen lock, demo, message box,
	// access dialog) if a user is logged on - prevents us from messing up logon
	// dialog on Windows
	if( id == IdSystemTrayIcon ||
			!LocalSystem::User::loggedOnUser().name().isEmpty() )
	{
		Ipc::Master::createSlave( id, slaveLauncher );
	}
	else
	{
		qDebug() << "VeritableSlaveManager: not creating slave" << id
					<< "as no user is logged on.";
	}
}



bool VeritableSlaveManager::handleMessage( const Ipc::Id &slaveId, const Ipc::Msg &m )
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

