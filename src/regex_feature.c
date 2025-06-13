/* regex_feature.c -- helper functions for recognizers using regexes

   Copyright (C) 2000 Carl Worth

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
*/

#include <stdio.h>
#include <stdlib.h>

#include "regex_feature.h"
#include "sprintf_alloc.h"


regex_t *regex_feature_alloc(const char *regex_str)
{
    return (void*)regex_str;
}
void regex_feature_free(regex_t *regex)
{
}
typedef int (*lex_fn)(const char *);

float regex_feature_recognize(regex_t *regex, const char *sequence)
{
    int res;
    lex_fn fn;

    fn = (lex_fn)regex;
    res = fn(sequence);

    if (res == 1)
	return 0.0f;
    else
	return 1.0f;
}
