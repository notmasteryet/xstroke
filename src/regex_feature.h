/* regex_feature.h -- helper functions for recognizers using regexes

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

#ifndef REGEX_FEATURE_H
#define REGEX_FEATURE_H

typedef void *regex_t;

regex_t *regex_feature_alloc(const char *regex_str);
void regex_feature_free(regex_t *regex);
float regex_feature_recognize(regex_t *regex, const char *sequence);

#endif
