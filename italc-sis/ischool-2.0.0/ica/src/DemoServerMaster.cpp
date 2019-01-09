/*
 * DemoServerMaster.cpp - class for controlling the VNC reflector slave process
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include "DemoServerMaster.h"
#include "IschoolCore.h"
#include "IschoolSlaveManager.h"


DemoServerMaster::DemoServerMaster( IschoolSlaveManager *slaveManager ) :
	m_slaveManager( slaveManager ),
	m_allowedHosts(),
	m_serverPort( -1 )
{
}



DemoServerMaster::~DemoServerMaster()
{
}



void DemoServerMaster::start( int sourcePort, int destinationPort )
{
	m_slaveManager->createSlave( IschoolSlaveManager::IdDemoServer );
	m_slaveManager->sendMessage( IschoolSlaveManager::IdDemoServer,
					Ipc::Msg( IschoolSlaveManager::DemoServer::StartDemoServer ).
						addArg( IschoolSlaveManager::DemoServer::CommonSecret,
									IschoolCore::authenticationCredentials->commonSecret() ).
						addArg( IschoolSlaveManager::DemoServer::SourcePort, sourcePort ).
						addArg( IschoolSlaveManager::DemoServer::DestinationPort, destinationPort ) );

	m_serverPort = destinationPort;
}



void DemoServerMaster::stop()
{
	m_slaveManager->stopSlave( IschoolSlaveManager::IdDemoServer );
}



void DemoServerMaster::updateAllowedHosts()
{
	m_slaveManager->sendMessage( IschoolSlaveManager::IdDemoServer,
					Ipc::Msg( IschoolSlaveManager::DemoServer::UpdateAllowedHosts ).
						addArg( IschoolSlaveManager::DemoServer::AllowedHosts, m_allowedHosts ) );
}


