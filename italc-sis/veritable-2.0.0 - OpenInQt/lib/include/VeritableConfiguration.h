/*
 * VeritableConfiguration.h - a Configuration object storing system wide
 *                        configuration values
 *
 * Copyright (c) 2010-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#ifndef _VERITABLE_CONFIGURATION_H
#define _VERITABLE_CONFIGURATION_H

#include <QtCore/QStringList>

#include "Configuration/Object.h"

class VeritableConfiguration : public Configuration::Object
{
	Q_OBJECT
public:
	VeritableConfiguration( Configuration::Store::Backend backend =
										Configuration::Store::LocalBackend );
	VeritableConfiguration( Configuration::Store *store );
	VeritableConfiguration( const VeritableConfiguration &ref );

	static VeritableConfiguration defaultConfiguration();

	static QString expandPath( QString path );


#define FOREACH_VERITABLE_CONFIG_PROPERTY(OP)												\
		/* vERITABLE Service */																\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isTrayIconHidden, setTrayIconHidden, "HideTrayIcon", "Service" );			\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, lockWithDesktopSwitching, setLockWithDesktopSwitching, "LockWithDesktopSwitching", "Service" );			\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, autostartService, setServiceAutostart, "Autostart", "Service" );			\
		OP( VeritableConfiguration, VeritableCore::config, STRING, serviceArguments, setServiceArguments, "Arguments", "Service" );			\
		/* Logging */																	\
		OP( VeritableConfiguration, VeritableCore::config, INT, logLevel, setLogLevel, "LogLevel", "Logging" );								\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, limittedLogFileSize, setLimittedLogFileSize, "LimittedLogFileSize", "Logging" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, logToStdErr, setLogToStdErr, "LogToStdErr", "Logging" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, logToWindowsEventLog, setLogToWindowsEventLog, "LogToWindowsEventLog", "Logging" );	\
		OP( VeritableConfiguration, VeritableCore::config, INT, logFileSizeLimit, setLogFileSizeLimit, "LogFileSizeLimit", "Logging" );		\
		OP( VeritableConfiguration, VeritableCore::config, STRING, logFileDirectory, setLogFileDirectory, "LogFileDirectory", "Logging" );		\
		/* VNC Server */																\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, vncCaptureLayeredWindows, setVncCaptureLayeredWindows, "CaptureLayeredWindows", "VNC" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, vncPollFullScreen, setVncPollFullScreen, "PollFullScreen", "VNC" );			\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, vncLowAccuracy, setVncLowAccuracy, "LowAccuracy", "VNC" );					\
		/* Demo server */																\
		OP( VeritableConfiguration, VeritableCore::config, INT, demoServerBackend, setDemoServerBackend, "Backend", "DemoServer" );		\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isDemoServerMultithreaded, setDemoServerMultithreaded, "Multithreaded", "DemoServer" );		\
		/* Network */																	\
		OP( VeritableConfiguration, VeritableCore::config, INT, coreServerPort, setCoreServerPort, "CoreServerPort", "Network" );			\
		OP( VeritableConfiguration, VeritableCore::config, INT, httpServerPort, setHttpServerPort, "HttpServerPort", "Network" );			\
		OP( VeritableConfiguration, VeritableCore::config, INT, demoServerPort, setDemoServerPort, "DemoServerPort", "Network" );			\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isHttpServerEnabled, setHttpServerEnabled, "HttpServerEnabled", "Network" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isFirewallExceptionEnabled, setFirewallExceptionEnabled, "FirewallExceptionEnabled", "Network" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, localConnectOnly, setLocalConnectOnly, "LocalConnectOnly", "Network" );					\
		/* Configuration file paths */													\
		OP( VeritableConfiguration, VeritableCore::config, STRING, globalConfigurationPath, setGlobalConfigurationPath, "GlobalConfiguration", "Paths" );	\
		OP( VeritableConfiguration, VeritableCore::config, STRING, personalConfigurationPath, setPersonalConfigurationPath, "PersonalConfiguration", "Paths" );	\
		/* Data directories */															\
		OP( VeritableConfiguration, VeritableCore::config, STRING, snapshotDirectory, setSnapshotDirectory, "SnapshotDirectory", "Paths" );	\
		/* Authentication */															\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isKeyAuthenticationEnabled, setKeyAuthenticationEnabled, "KeyAuthenticationEnabled", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isLogonAuthenticationEnabled, setLogonAuthenticationEnabled, "LogonAuthenticationEnabled", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isPermissionRequiredWithKeyAuthentication, setPermissionRequiredWithKeyAuthentication, "PermissionRequiredWithKeyAuthentication", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, STRING, privateKeyBaseDir, setPrivateKeyBaseDir, "PrivateKeyBaseDir", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, STRING, publicKeyBaseDir, setPublicKeyBaseDir, "PublicKeyBaseDir", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isPermissionRequiredWithLogonAuthentication, setPermissionRequiredWithLogonAuthentication, "PermissionRequiredWithLogonAuthentication", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, BOOL, isSameUserConfirmationDisabled, setSameUserConfirmationDisabled, "SameUserConfirmationDisabled", "Authentication" );	\
		OP( VeritableConfiguration, VeritableCore::config, STRINGLIST, logonGroups, setLogonGroups, "LogonGroups", "Authentication" );	\

	FOREACH_VERITABLE_CONFIG_PROPERTY(DECLARE_CONFIG_PROPERTY)

	// unluckily we have to declare slots manually as Qt's MOC doesn't do any
	// macro expansion :-(
public slots:
	void setTrayIconHidden( bool );
	void setLockWithDesktopSwitching( bool );
	void setServiceAutostart( bool );
	void setServiceArguments( const QString & );
	void setLogLevel( int );
	void setLogToStdErr( bool );
	void setLogToWindowsEventLog( bool );
	void setLimittedLogFileSize( bool );
	void setLogFileSizeLimit( int );
	void setLogFileDirectory( const QString & );
	void setVncCaptureLayeredWindows( bool );
	void setVncPollFullScreen( bool );
	void setVncLowAccuracy( bool );
	void setDemoServerBackend( int );
	void setDemoServerMultithreaded( bool );
	void setCoreServerPort( int );
	void setDemoServerPort( int );
	void setHttpServerPort( int );
	void setFirewallExceptionEnabled( bool );
	void setLocalConnectOnly( bool );
	void setHttpServerEnabled( bool );
	void setGlobalConfigurationPath( const QString & );
	void setPersonalConfigurationPath( const QString & );
	void setSnapshotDirectory( const QString & );
	void setKeyAuthenticationEnabled( bool );
	void setLogonAuthenticationEnabled( bool );
	void setPermissionRequiredWithKeyAuthentication( bool );
	void setPrivateKeyBaseDir( const QString & );
	void setPublicKeyBaseDir( const QString & );
	void setPermissionRequiredWithLogonAuthentication( bool );
	void setSameUserConfirmationDisabled( bool );
	void setLogonGroups( const QStringList & );

} ;

#endif
