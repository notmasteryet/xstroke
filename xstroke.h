/* xstroke.h - toplevel data for xstroke

   Copyright 2001 Carl Worth

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
*/

#ifndef XSTROKE_H
#define XSTROKE_H

/*
#define XSTROKE_DEBUG
*/

#ifdef XSTROKE_DEBUG
# define XSTROKE_SYNCHRONOUS
# define XSTROKE_NOGRAB_SERVER
/*
# define REC_PARSE_DEBUG
# define XSTROKE_DEBUG_ROTATION
*/
#endif

#include "rec.h"
#include "args.h"
#include "action.h"

typedef int XModifierKeymap;
struct xstroke
{
    XModifierKeymap *modifier_map;

    rec_t rec;
    action_key_data_t modifiers[8];
};
typedef struct xstroke xstroke_t;

#endif /* XSTROKE_H */
