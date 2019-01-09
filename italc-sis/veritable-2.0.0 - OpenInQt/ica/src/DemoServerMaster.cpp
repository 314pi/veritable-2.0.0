/*
 * DemoServerMaster.cpp - class for controlling the VNC reflector slave process
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include "DemoServerMaster.h"
#include "VeritableCore.h"
#include "VeritableSlaveManager.h"


DemoServerMaster::DemoServerMaster( VeritableSlaveManager *slaveManager ) :
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
	m_slaveManager->createSlave( VeritableSlaveManager::IdDemoServer );
	m_slaveManager->sendMessage( VeritableSlaveManager::IdDemoServer,
					Ipc::Msg( VeritableSlaveManager::DemoServer::StartDemoServer ).
						addArg( VeritableSlaveManager::DemoServer::CommonSecret,
									VeritableCore::authenticationCredentials->commonSecret() ).
						addArg( VeritableSlaveManager::DemoServer::SourcePort, sourcePort ).
						addArg( VeritableSlaveManager::DemoServer::DestinationPort, destinationPort ) );

	m_serverPort = destinationPort;
}



void DemoServerMaster::stop()
{
	m_slaveManager->stopSlave( VeritableSlaveManager::IdDemoServer );
}



void DemoServerMaster::updateAllowedHosts()
{
	m_slaveManager->sendMessage( VeritableSlaveManager::IdDemoServer,
					Ipc::Msg( VeritableSlaveManager::DemoServer::UpdateAllowedHosts ).
						addArg( VeritableSlaveManager::DemoServer::AllowedHosts, m_allowedHosts ) );
}


