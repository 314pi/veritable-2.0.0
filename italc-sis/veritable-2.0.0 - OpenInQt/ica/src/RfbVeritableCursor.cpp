/*
 * RfbVeritableCursor.cpp - vERITABLE cursor rectangle encoding
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

#include "VeritableVncConnection.h"
#include "RfbVeritableCursor.h"
#include "SocketDevice.h"

#include <rfb/rfb.h>
#include <rfb/rfbclient.h>


static rfbBool handleEncodingVeritableCursor( rfbClient *c,
										rfbFramebufferUpdateRectHeader *r )
{
	VeritableVncConnection *t = (VeritableVncConnection *) rfbClientGetClientData( c, 0 );
	if( r->encoding != rfbEncodingVeritableCursor || t == NULL )
	{
		return false;
	}

	QImage cursorShape(
				SocketDevice( libvncClientDispatcher, c ).read().value<QImage>() );

	t->cursorShapeUpdatedExternal( cursorShape, r->r.x, r->r.y );

	return true;
}




static rfbClientProtocolExtension * __veritableCursorProtocolExt = NULL;


RfbVeritableCursor::RfbVeritableCursor()
{
	if( __veritableCursorProtocolExt == NULL )
	{
		__veritableCursorProtocolExt = new rfbClientProtocolExtension;
		__veritableCursorProtocolExt->encodings = new int[2];
		__veritableCursorProtocolExt->encodings[0] = rfbEncodingVeritableCursor;
		__veritableCursorProtocolExt->encodings[1] = 0;
		__veritableCursorProtocolExt->handleEncoding = handleEncodingVeritableCursor;
		__veritableCursorProtocolExt->handleMessage = NULL;

		rfbClientRegisterExtension( __veritableCursorProtocolExt );
	}
}


