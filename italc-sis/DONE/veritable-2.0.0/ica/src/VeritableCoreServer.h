/*
 * VeritableCoreServer.h - VeritableCoreServer
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

#ifndef _VERITABLE_CORE_SERVER_H
#define _VERITABLE_CORE_SERVER_H

#include <QtCore/QMutex>
#include <QtCore/QStringList>

#include "SocketDevice.h"
#include "VeritableSlaveManager.h"


class VeritableCoreServer : public QObject
{
	Q_OBJECT
public:
	VeritableCoreServer();
	virtual ~VeritableCoreServer();

	static VeritableCoreServer *instance()
	{
		Q_ASSERT( _this != NULL );
		return _this;
	}

	int handleVeritableClientMessage( socketDispatcher sd, void *user );

	bool authSecTypeVeritable( socketDispatcher sd, void *user );

	VeritableSlaveManager * slaveManager()
	{
		return &m_slaveManager;
	}

	void setAllowedIPs( const QStringList &allowedIPs )
	{
		QMutexLocker l( &m_dataMutex );
		m_allowedIPs = allowedIPs;
	}


private:
	static void errorMsgAuth( const QString & _ip );

	bool doKeyBasedAuth( SocketDevice &sdev, const QString &host );
	bool doHostBasedAuth( const QString &host );
	bool doCommonSecretAuth( SocketDevice &sdev );

	static VeritableCoreServer *_this;

	QMutex m_dataMutex;
	QStringList m_allowedIPs;

	// list of hosts that are allowed/denied to access ICA when ICA is running
	// under a role different from "RoleOther"
	QStringList m_manuallyAllowedHosts;
	QStringList m_manuallyDeniedHosts;

	VeritableSlaveManager m_slaveManager;

} ;


#endif
