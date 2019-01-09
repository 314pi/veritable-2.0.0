#include <windows.h>

#include <QtCore/QSettings>

#include "DesktopAccessPermission.h"
#include "IschoolCore.h"
#include "IschoolCoreServer.h"
#include "IschoolConfiguration.h"
#include "Configuration/LocalStore.h"

static QSettings *__ischoolSettings = NULL;


BOOL ultravnc_ischool_load_int( LPCSTR valname, LONG *out )
{
	if( strcmp( valname, "LocalConnectOnly" ) == 0 )
	{
		if( __ischoolSettings == NULL )
		{
			__ischoolSettings = Configuration::LocalStore( Configuration::Store::System ).createSettingsObject();
			__ischoolSettings->beginGroup( "Network" );
		}

		*out = __ischoolSettings->value( valname ).toInt();
		return true;
	}
	if( strcmp( valname, "DisableTrayIcon" ) == 0 )
	{
		*out = 1;
		return true;
	}
	if( strcmp( valname, "AuthRequired" ) == 0 )
	{
		*out = 1;
		return true;
	}
	if( strcmp( valname, "CaptureAlphaBlending" ) == 0 )
	{
		*out = IschoolCore::config->vncCaptureLayeredWindows() ? 1 : 0;
		return true;
	}
	if( strcmp( valname, "PollFullScreen" ) == 0 )
	{
		*out = IschoolCore::config->vncPollFullScreen() ? 1 : 0;
		return true;
	}
	if( strcmp( valname, "TurboMode" ) == 0 )
	{
		*out = IschoolCore::config->vncLowAccuracy() ? 1 : 0;
		return true;
	}
	if( strcmp( valname, "NewMSLogon" ) == 0 )
	{
		*out = 1;
		return true;
	}
	if( strcmp( valname, "MSLogonRequired" ) == 0 )
	{
		*out = IschoolCore::config->isLogonAuthenticationEnabled() ? 1 : 0;
		return true;
	}
	if( strcmp( valname, "RemoveWallpaper" ) == 0 )
	{
		*out = 0;
		return true;
	}
	if( strcmp( valname, "FileTransferEnabled" ) == 0 )
	{
		*out = 0;
		return true;
	}
	if( strcmp( valname, "AllowLoopback" ) == 0 )
	{
		*out = 1;
		return true;
	}
	if( strcmp( valname, "AutoPortSelect" ) == 0 )
	{
		*out = 0;
		return true;
	}

	if( strcmp( valname, "HTTPConnect" ) == 0 )
	{
		*out = IschoolCore::config->isHttpServerEnabled() ? 1 : 0;
		return true;
	}

	if( strcmp( valname, "PortNumber" ) == 0 )
	{
		*out = IschoolCore::config->coreServerPort();
		return true;
	}

	if( strcmp( valname, "HTTPPortNumber" ) == 0 )
	{
		*out = IschoolCore::config->httpServerPort();
		return true;
	}

	return false;
}


BOOL ultravnc_ischool_ask_permission( const char *username, const char *host )
{
	return DesktopAccessPermission(
				DesktopAccessPermission::LogonAuthentication ).
														ask( username, host );
}


