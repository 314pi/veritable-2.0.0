/*
 * VeritableRfbExt.h - an extension of the RFB-protocol, used for communication
 *                 between master and clients
 *
 * Copyright (c) 2004-2011 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#ifndef _VERITABLE_RFB_EXT_H
#define _VERITABLE_RFB_EXT_H

#include <rfb/rfbproto.h>
#include <rfb/rfbclient.h>

// new rfb-command which tells server or client that an veritable-request/response
// is following
#define rfbVeritableCoreRequest		40
#define rfbVeritableCoreResponse		rfbVeritableCoreRequest


#define rfbSecTypeVeritable 40


enum PortOffsets
{
	PortOffsetVncServer = 11100,
	PortOffsetDemoServer = PortOffsetVncServer + 300,
	PortOffsetHttpServer = 5800
} ;


enum VeritableAuthTypes
{
	// no authentication needed
	VeritableAuthNone,

	// only hosts in internal host-list are allowed
	VeritableAuthHostBased,

	// client has to sign some data to verify it's authority
	VeritableAuthDSA,

	// client has to prove its authenticity by knowing an application-internal
	// secret
	VeritableAuthCommonSecret,

	NumVeritableAuthTypes

} ;

typedef enum VeritableAuthTypes VeritableAuthType;


#ifdef __cplusplus
extern "C"
{
#endif
int isLogonAuthenticationEnabled( rfbClient *client );
void handleSecTypeVeritable( rfbClient *client );
void handleMsLogonIIAuth( rfbClient *client );
#ifdef __cplusplus
}
#endif

#endif
