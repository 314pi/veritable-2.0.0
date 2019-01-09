/*
 * IschoolConfiguration.cpp - a Configuration object storing system wide
 *                          configuration values
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include <QtCore/QDir>
#include <QtCore/QProcessEnvironment>
#include <QtCore/QSysInfo>

#include "IschoolConfiguration.h"
#include "IschoolCore.h"
#include "IschoolRfbExt.h"
#include "LocalSystem.h"
#include "Logger.h"


IschoolConfiguration::IschoolConfiguration(
									Configuration::Store::Backend backend ) :
	Configuration::Object( backend, Configuration::Store::System )
{
}



IschoolConfiguration::IschoolConfiguration( Configuration::Store *store ) :
	Configuration::Object( store )
{
}



IschoolConfiguration::IschoolConfiguration( const IschoolConfiguration &ref ) :
	Configuration::Object( Configuration::Store::NoBackend,
							Configuration::Store::System )
{
	*this += ref;	// copy data
}




IschoolConfiguration IschoolConfiguration::defaultConfiguration()
{
	IschoolConfiguration c( Configuration::Store::NoBackend );

	c.setTrayIconHidden( false );
	c.setServiceAutostart( true );
	c.setServiceArguments( QString() );

	c.setLogLevel( Logger::LogLevelDefault );
	c.setLimittedLogFileSize( false );
	c.setLogToStdErr( true );
	c.setLogToWindowsEventLog( false );
	c.setLogFileSizeLimit( -1 );
	c.setLogFileDirectory(
#ifdef ISCHOOL_BUILD_WIN32
		"%TEMP%"
#else
		"$TEMP"
#endif
				);

	c.setVncCaptureLayeredWindows(
#ifdef ISCHOOL_BUILD_WIN32
						QSysInfo::windowsVersion() == QSysInfo::WV_VISTA ||
						QSysInfo::windowsVersion() == QSysInfo::WV_WINDOWS7
#else
						false
#endif
								);
	c.setVncPollFullScreen( true );
	c.setVncLowAccuracy( true );

	c.setDemoServerBackend( 0 );
	c.setDemoServerMultithreaded( true );

	c.setCoreServerPort( PortOffsetVncServer );
	c.setDemoServerPort( PortOffsetDemoServer );
	c.setHttpServerPort( PortOffsetHttpServer );
	c.setHttpServerEnabled( false );
	c.setFirewallExceptionEnabled( true );

	c.setGlobalConfigurationPath( QDTNS( "$APPDATA/GlobalConfig.xml" ) );
	c.setPersonalConfigurationPath( QDTNS( "$APPDATA/PersonalConfig.xml" ) );

	c.setSnapshotDirectory( QDTNS( "$APPDATA/Snapshots" ) );

	c.setKeyAuthenticationEnabled( true );
	c.setLogonAuthenticationEnabled( true );

	c.setPermissionRequiredWithKeyAuthentication( false );
	c.setPrivateKeyBaseDir( QDTNS( "$GLOBALAPPDATA/keys/private" ) );
	c.setPublicKeyBaseDir( QDTNS( "$GLOBALAPPDATA/keys/public" ) );

	c.setPermissionRequiredWithLogonAuthentication( false );
	c.setSameUserConfirmationDisabled( false );
	c.setLogonGroups( QStringList() );

	return c;
}



FOREACH_ISCHOOL_CONFIG_PROPERTY(IMPLEMENT_CONFIG_SET_PROPERTY)

