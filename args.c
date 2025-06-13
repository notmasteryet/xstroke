/* args.c - parse command-line args
 
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

#include "args.h"
#include <string.h>
#include <stdlib.h>

int args_init(args_t *args)
{
    args->alphabet = strdup(ARGS_DEFAULT_ALPHABET);
    args->lograw = ARGS_DEFAULT_LOGRAW;
    args->rotation = ARGS_DEFAULT_ROTATION;
    args->rotation_limit = ARGS_DEFAULT_ROTATION_LIMIT;
	args->verify = ARGS_DEFAULT_VERIFY;

    return 0;
}

void args_deinit(args_t *args)
{
    free(args->alphabet);
}
