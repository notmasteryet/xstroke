/* args.h - parse command-line args
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

#ifndef ARGS_H
#define ARGS_H

struct args
{
    int width;
    char *alphabet;
    int lograw;
    int rotation;
    double rotation_limit;
    char *verify;
};
typedef struct args args_t;

#include "xstroke.h"

#include <math.h>

#define ARGS_DEFAULT_ALPHABET "./conf/alphabet"
#define ARGS_DEFAULT_LOGRAW 0
#define ARGS_DEFAULT_ROTATION 1
#define ARGS_DEFAULT_ROTATION_LIMIT (M_PI_4 / 4.0)
#define ARGS_DEFAULT_VERIFY NULL

int args_init(args_t *args);
void args_deinit(args_t *args);

#endif
