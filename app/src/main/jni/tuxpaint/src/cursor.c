/*
  cursor.c

  For Tux Paint
  Bitmapped mouse pointer (cursor)

  Copyright (c) 2002-2022 by Bill Kendrick and others
  bill@newbreedsoftware.com
  http://www.tuxpaint.org/

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  (See COPYING.txt)

  June 14, 2002 - February 5, 2022
  $Id$
*/

#include "cursor.h"
#include "debug.h"

#define UNUSED(arg) ((void)(arg))

SDL_Cursor *cursor_hand, *cursor_arrow, *cursor_watch,
  *cursor_up, *cursor_down, *cursor_tiny, *cursor_crosshair,
  *cursor_brush, *cursor_wand, *cursor_insertion, *cursor_rotate,
  *cursor_pipette;

#ifdef NOKIA_770
int hide_cursor = 1;
#else
int hide_cursor;
#endif

#if defined(NOKIA_770) || defined(__BEOS__) || defined(__HAIKU__)
// Fancy cursors on BeOS are buggy in SDL
int no_fancy_cursors = 1;
#else
int no_fancy_cursors;
#endif

/**
 * Set the current cursor shape.
 *
 * @param c The cursor shape to use.
 */
void do_setcursor(SDL_Cursor * c)
{
  /* Shut GCC up over the fact that the XBMs are #included within cursor.h
     but used in tuxpaint.c (and not cursor.c) */

  UNUSED(watch_bits);
  UNUSED(watch_mask_bits);
  UNUSED(hand_bits);
  UNUSED(hand_mask_bits);
  UNUSED(wand_bits);
  UNUSED(wand_mask_bits);
  UNUSED(insertion_bits);
  UNUSED(insertion_mask_bits);
  UNUSED(brush_bits);
  UNUSED(brush_mask_bits);
  UNUSED(crosshair_bits);
  UNUSED(crosshair_mask_bits);
  UNUSED(rotate_bits);
  UNUSED(rotate_mask_bits);
  UNUSED(up_bits);
  UNUSED(up_mask_bits);
  UNUSED(down_bits);
  UNUSED(down_mask_bits);
  UNUSED(tiny_bits);
  UNUSED(tiny_mask_bits);
  UNUSED(arrow_bits);
  UNUSED(arrow_mask_bits);
  UNUSED(pipette_bits);
  UNUSED(pipette_mask_bits);

  if (!hide_cursor && !no_fancy_cursors)
    SDL_SetCursor(c);
}

/**
 * Free (deallocate) a cursor.
 *
 * @param cursor Pointer to a cursor to free; will be set to point to NULL afterwards.
 */
void free_cursor(SDL_Cursor ** cursor)
{
  if (*cursor)
    {
      SDL_FreeCursor(*cursor);
      *cursor = NULL;
    }
}
