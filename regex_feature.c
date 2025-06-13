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

#ifdef DMALLOC
#include "dmalloc.h"
#endif

#ifdef NO_REGEX
regex_t *regex_feature_alloc(char *regex_str)
{
    return (void*)regex_str;
}
void regex_feature_free(regex_t *regex)
{
}
typedef int (*lex_fn)(char *);

float regex_feature_recognize(regex_t *regex, char *sequence)
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


#else
regex_t *regex_feature_alloc(char *regex_str)
{
#define RE_ERR_MSG_LEN 255
    char err_msg[RE_ERR_MSG_LEN];
    char *regex_str_complete;
    regex_t *regex;
    int err;

    regex = malloc(sizeof(regex_t));
    if (regex == NULL) {
	return NULL;
    }

    sprintf_alloc(&regex_str_complete, "^%s$", regex_str);
    err = regcomp(regex, regex_str_complete, REG_EXTENDED | REG_NOSUB);
    free(regex_str_complete);
    if (err) {
	regerror(err, regex, err_msg, RE_ERR_MSG_LEN);
	fprintf(stderr, "%s: An error occurred during regcomp(%s): %s\n",
		__FUNCTION__, regex_str_complete, err_msg);
	return NULL;
    }

    return regex;
}

void regex_feature_free(regex_t *regex)
{
    if (!regex) return;
    regfree(regex);
    free(regex);
}

float regex_feature_recognize(regex_t *regex, char *sequence)
{
    int res;

    res = regexec(regex, sequence, 0, 0, 0);

    if (res == REG_NOMATCH)
	return 0.0f;
    else
	return 1.0f;
}
#endif