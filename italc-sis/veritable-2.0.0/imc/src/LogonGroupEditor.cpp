/*
 * LogonGroupEditor.cpp - a dialog for editing logon groups
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include <veritableconfig.h>

#include <QtCore/QProcess>

#include "VeritableConfiguration.h"
#include "VeritableCore.h"
#include "LogonGroupEditor.h"

#include "ui_LogonGroupEditor.h"



LogonGroupEditor::LogonGroupEditor( QWidget *parent ) :
	QDialog( parent ),
	ui( new Ui::LogonGroupEditor ),
	m_logonGroups( VeritableCore::config->logonGroups() )
{
	ui->setupUi( this );

	updateLogonGroupsUI();
}




LogonGroupEditor::~LogonGroupEditor()
{
}




void LogonGroupEditor::accept()
{
	VeritableCore::config->setLogonGroups( m_logonGroups );
	QDialog::accept();
}




void LogonGroupEditor::addLogonGroup()
{
	foreach( QListWidgetItem *item, ui->allGroups->selectedItems() )
	{
		m_logonGroups.removeAll( item->text() );
		m_logonGroups += item->text();
	}
	m_logonGroups.removeAll( "" );

	updateLogonGroupsUI();
}




void LogonGroupEditor::removeLogonGroup()
{
	foreach( QListWidgetItem *item, ui->logonGroups->selectedItems() )
	{
		m_logonGroups.removeAll( item->text() );
	}
	m_logonGroups.removeAll( "" );

	updateLogonGroupsUI();
}




void LogonGroupEditor::updateLogonGroupsUI()
{
	QStringList groupNames;
#ifdef VERITABLE_BUILD_LINUX
	QProcess p;
	p.start( "getent", QStringList() << "group" );
	p.waitForFinished();

	QStringList groups = QString( p.readAll() ).split( '\n' );
	foreach( const QString &group, groups )
	{
		groupNames += group.split( ':' ).first();
	}
	static const char *ignoredGroups[] = {
		"root",
		"daemon",
		"bin",
		"tty",
		"disk",
		"lp",
		"mail",
		"news",
		"uucp",
		"man",
		"proxy",
		"kmem",
		"dialout",
		"fax",
		"voice",
		"cdrom",
		"tape",
		"audio",
		"dip",
		"www-data",
		"backup",
		"list",
		"irc",
		"src",
		"gnats",
		"shadow",
		"utmp",
		"video",
		"sasl",
		"plugdev",
		"games",
		"users",
		"nogroup",
		"libuuid",
		"syslog",
		"fuse",
		"lpadmin",
		"ssl-cert",
		"messagebus",
		"crontab",
		"mlocate",
		"avahi-autoipd",
		"netdev",
		"saned",
		"sambashare",
		"haldaemon",
		"polkituser",
		"mysql",
		"avahi",
		"klog",
		"floppy",
		"oprofile",
		"netdev",
		"dirmngr",
		"vboxusers",
		"",
		NULL };
	for( int i = 0; ignoredGroups[i] != NULL; ++i )
	{
		groupNames.removeAll( ignoredGroups[i] );
	}
#endif

	ui->logonGroups->setUpdatesEnabled( false );

	ui->allGroups->clear();
	ui->logonGroups->clear();

	const QStringList logonGroups = m_logonGroups;
	foreach( const QString &g, groupNames )
	{
		if( logonGroups.contains( g ) )
		{
			ui->logonGroups->addItem( g );
		}
		else
		{
			ui->allGroups->addItem( g );
		}
	}

	ui->logonGroups->setUpdatesEnabled( true );
}

