//
// Copyright (c) 2009, Wei Mingzhi <whistler@openoffice.org>.
// All rights reserved.
//
// This file is part of SDLPAL.
//
// SDLPAL is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef RIX_PLAY_H
#define RIX_PLAY_H

#include "common.h"

#ifdef __cplusplus

extern "C"
{
#endif

VOID
RIX_FillBuffer(
   LPBYTE     stream,
   INT        len
);

INT
RIX_Init(
   LPCSTR     szFileName
);

VOID
RIX_Shutdown(
   VOID
);

VOID
RIX_Play(
   INT       iNumRIX,
   BOOL      fLoop,
   FLOAT     flFadeTime
);

#ifdef __cplusplus
}
#endif

#endif
