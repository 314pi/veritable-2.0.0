/*
 * IschoolRfbExt.h - an extension of the RFB-protocol, used for communication
 *                 between master and clients
 *
 * Copyright (c) 2004-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#ifndef _ISCHOOL_RFB_EXT_H
#define _ISCHOOL_RFB_EXT_H

#include <rfb/rfbproto.h>
#include <rfb/rfbclient.h>

// new rfb-command which tells server or client that an ischool-request/response
// is following
#define rfbIschoolCoreRequest		40
#define rfbIschoolCoreResponse		rfbIschoolCoreRequest


#define rfbSecTypeIschool 40


enum PortOffsets
{
	PortOffsetVncServer = 11100,
	PortOffsetDemoServer = PortOffsetVncServer + 300,
	PortOffsetHttpServer = 5800
} ;


enum IschoolAuthTypes
{
	// no authentication needed
	IschoolAuthNone,

	// only hosts in internal host-list are allowed
	IschoolAuthHostBased,

	// client has to sign some data to verify it's authority
	IschoolAuthDSA,

	// client has to prove its authenticity by knowing an application-internal
	// secret
	IschoolAuthCommonSecret,

	NumIschoolAuthTypes

} ;

typedef enum IschoolAuthTypes IschoolAuthType;


#ifdef __cplusplus
extern "C"
{
#endif
int isLogonAuthenticationEnabled( rfbClient *client );
void handleSecTypeIschool( rfbClient *client );
void handleMsLogonIIAuth( rfbClient *client );
#ifdef __cplusplus
}
#endif

#endif
