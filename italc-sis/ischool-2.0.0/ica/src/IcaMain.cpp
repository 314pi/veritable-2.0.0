/*
 * IcaMain.cpp - main file for ICA (iSCHOOL Client Application)
 *
 * Copyright (c) 2006-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include <ischoolconfig.h>

#include <QtCore/QProcess>
#include <QtGui/QApplication>
#include <QtNetwork/QHostInfo>

#include "WindowsService.h"
#include "IschoolConfiguration.h"
#include "IschoolCore.h"
#include "IschoolCoreServer.h"
#include "IschoolVncServer.h"
#include "Logger.h"

#include "AccessDialogSlave.h"
#include "DemoClientSlave.h"
#include "DemoServerSlave.h"
#include "MessageBoxSlave.h"
#include "InputLockSlave.h"
#include "ScreenLockSlave.h"
#include "SystemTrayIconSlave.h"


#ifdef ISCHOOL_BUILD_WIN32
static HANDLE hShutdownEvent = NULL;

// event-filter which makes ICA recognize logoff events etc.
bool eventFilter( void *msg, long *result )
{
	DWORD winMsg = ( ( MSG *) msg )->message;

	if( winMsg == WM_QUERYENDSESSION )
	{
		ilog( Info, "Got WM_QUERYENDSESSION - initiating server shutdown" );

		// tell UltraVNC server to quit
		SetEvent( hShutdownEvent );
	}

	return false;
}

#endif



static bool parseArguments( const QStringList &arguments )
{
	QStringListIterator argIt( arguments );
	argIt.next();	// skip application file name
	while( argIt.hasNext() )
	{
		const QString & a = argIt.next().toLower();
		if( a == "-port" && argIt.hasNext() )
		{
			IschoolCore::serverPort = argIt.next().toInt();
		}
		else if( a == "-role" )
		{
			if( argIt.hasNext() )
			{
				const QString role = argIt.next();
				if( role == "teacher" )
				{
					IschoolCore::role = IschoolCore::RoleTeacher;
				}
				else if( role == "admin" )
				{
					IschoolCore::role = IschoolCore::RoleAdmin;
				}
				else if( role == "supporter" )
				{
					IschoolCore::role = IschoolCore::RoleSupporter;
				}
			}
			else
			{
				printf( "-role needs an argument:\n"
					"	teacher\n"
					"	admin\n"
					"	supporter\n\n" );
				return false;
			}
		}
#ifdef ISCHOOL_BUILD_LINUX
		// accept these options for x11vnc
		else if( a == "-nosel" || a == "-nosetclipboard" ||
				a == "-noshm" || a == "-solid" ||
				a == "-xrandr" || a == "-onetile" )
		{
		}
		else if( a == "-h" || a == "--help" )
		{
			QProcess::execute( "man ica" );
			return false;
		}
#endif
		else if( a == "-v" || a == "--version" )
		{
			printf( "%s\n", ISCHOOL_VERSION );
			return false;
		}
		else if( a == "-slave" )
		{
			return true;
		}
		else
		{
			qWarning() << "Unrecognized commandline argument" << a;
			return false;
		}
	}

	return true;
}




static int runCoreServer( int argc, char **argv )
{
	QCoreApplication app( argc, argv );

	IschoolCore::init();

	Logger l( "IschoolCoreServer" );

	// initialize global AuthenticationCredentials object so we can read and
	// write a common secret later
	IschoolCore::initAuthentication( AuthenticationCredentials::CommonSecret );

	if( !parseArguments( app.arguments() ) )
	{
		return -1;
	}

#ifdef ISCHOOL_BUILD_WIN32
	hShutdownEvent = OpenEvent( EVENT_ALL_ACCESS, FALSE,
								"Global\\SessionEventUltra" );
	if( !hShutdownEvent )
	{
		// no global event available already as we're not running under the
		// control of the ICA service supervisor?
		if( GetLastError() == ERROR_FILE_NOT_FOUND )
		{
			// then create our own event as otherwise the VNC server main loop
			// will eat 100% CPU due to failing WaitForSingleObject() calls
			hShutdownEvent = CreateEvent( NULL, FALSE, FALSE,
											"Global\\SessionEventUltra" );
		}
		else
		{
			qCritical( "Could not open or create session event" );
			return -1;
		}
	}
	app.setEventFilter( eventFilter );
#endif

	IschoolCoreServer coreServer;
	IschoolVncServer vncServer;

	// start the SystemTrayIconSlave and set the default tooltip
	coreServer.slaveManager()->setSystemTrayToolTip(
		QApplication::tr( "iSCHOOL Client %1 on %2:%3" ).
							arg( ISCHOOL_VERSION ).
							arg( QHostInfo::localHostName() ).
							arg( QString::number( vncServer.serverPort() ) ) );

	// make app terminate once the VNC server thread has finished
	app.connect( &vncServer, SIGNAL( finished() ), SLOT( quit() ) );

	vncServer.start();

	ilog( Info, "Exec" );
	int ret = app.exec();

#ifdef ISCHOOL_BUILD_WIN32
	CloseHandle( hShutdownEvent );
#endif

	return ret;
}



template<class SlaveClass, class Application>
static int runSlave( int argc, char **argv )
{
	Application app( argc, argv );

	IschoolCore::init();

	Logger l( "Ischool" + SlaveClass::slaveName() );

	// initialize global AuthenticationCredentials object so we can read and
	// write a common secret later
	IschoolCore::initAuthentication( AuthenticationCredentials::CommonSecret );

	if( !parseArguments( app.arguments() ) )
	{
		return -1;
	}

	SlaveClass s;

	ilog( Info, "Exec" );

	return app.exec();
}



#ifdef ISCHOOL_BUILD_WIN32
#include <windows.h>

extern HINSTANCE	hAppInstance;
extern DWORD		mainthreadId;
#endif

int main( int argc, char **argv )
{
#ifdef DEBUG
	extern int _Xdebug;
//	_Xdebug = 1;
#endif

#ifdef ISCHOOL_BUILD_WIN32
	// initialize global instance handler and main thread ID
	hAppInstance = GetModuleHandle( NULL );
	mainthreadId = GetCurrentThreadId();
#endif

	// decide in what mode to run
	if( argc >= 2 )
	{
		const QString arg1 = argv[1];
#ifdef ISCHOOL_BUILD_WIN32
		for( int i = 1; i < argc; ++i )
		{
			if( QString( argv[i] ).toLower().contains( "service" ) )
			{
				WindowsService winService( "icas", "-service", "iSCHOOL Client",
											QString(), argc, argv );
				if( winService.evalArgs( argc, argv ) )
				{
					return 0;
				}
				break;
			}
		}
#endif
		if( arg1.toLower() == "-slave" )
		{
			if( argc <= 2 )
			{
				qCritical( "Need to specify slave" );
				return -1;
			}
			const QString arg2 = argv[2];
			if( arg2 == IschoolSlaveManager::IdCoreServer )
			{
				return runCoreServer( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdAccessDialog )
			{
				return runSlave<AccessDialogSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdDemoClient )
			{
				return runSlave<DemoClientSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdMessageBox )
			{
				return runSlave<MessageBoxSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdScreenLock )
			{
				return runSlave<ScreenLockSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdInputLock )
			{
				return runSlave<InputLockSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdSystemTrayIcon )
			{
				return runSlave<SystemTrayIconSlave, QApplication>( argc, argv );
			}
			else if( arg2 == IschoolSlaveManager::IdDemoServer )
			{
				return runSlave<DemoServerSlave, QApplication>( argc, argv );
			}
			else
			{
				qCritical( "Unknown slave" );
				return -1;
			}
		}
	}

	return runCoreServer( argc, argv );
}


