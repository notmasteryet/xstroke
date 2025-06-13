/* xstroke.c - full-screen gesture recognition for X

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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <math.h>

#include "xstroke.h"
#include "rec.h"

const int DisplayWidth = 1000;
const int DisplayHeight = 1000;

static int xstroke_init(xstroke_t * xstroke);
static void xstroke_deinit(xstroke_t *xstroke);
static void key_action_cb(void *action_data, void *data);
static void button_action_cb(void *action_data, void *data);
static void mode_action_cb(void *action_data, void *data);
static void exec_action_cb(void *action_data, void *data);

static void register_rec_callbacks(xstroke_t *xstroke);

int xmain(int argc, const char *argv[])
{
    int err;
    xstroke_t xstroke;

    err = xstroke_init(&xstroke);
    if (err) {
	fprintf(stderr, "%s: An error occurred during xstroke_init\n", __FUNCTION__);
	return err;
    }

    
    rec_begin_stroke(&xstroke.rec, 100, 900, 0);
    rec_extend_stroke(&xstroke.rec, 500, 99, 100);
    rec_extend_stroke(&xstroke.rec, 999, 999, 200);
    rec_end_stroke(&xstroke.rec, 999, 999, 300);

    rec_begin_stroke(&xstroke.rec, 900, 400, 500);
    rec_extend_stroke(&xstroke.rec, 499, 459, 700);
    rec_end_stroke(&xstroke.rec, 99, 599, 900);

    rec_begin_stroke(&xstroke.rec, 500, 500, 1500);
    rec_end_stroke(&xstroke.rec, 499, 502, 1900);

    rec_begin_stroke(&xstroke.rec, 0, 4, 2500);
    rec_extend_stroke(&xstroke.rec, 499, 459, 2700);
    rec_end_stroke(&xstroke.rec, 899, 999, 2900);

    xstroke_deinit(&xstroke);

    return err;
}

static int xstroke_init(xstroke_t * xstroke)
{
    int err;
    err = rec_init(&xstroke->rec, DisplayWidth, DisplayHeight);
    if (err) {
	fprintf(stderr, "%s: An error occurred during rec_init\n", __FUNCTION__);
	return err;
    }

    register_rec_callbacks(xstroke);

    return 0;
}

static void xstroke_deinit(xstroke_t *xstroke)
{
    rec_deinit(&xstroke->rec);
}


static void key_action_cb(void *action_data, void *data)
{
    action_key_data_t *key_data = (action_key_data_t *) action_data;
    xstroke_t *xstroke = (xstroke_t *) data;
    int err;
    printf("key_action_cb: %s\n", XKeysymToString(key_data->keysym));

    // if (key_data->keycode == 0) {
    // if (key_data->flags & ACTION_KEY_IS_MODIFIER
	// && key_data->flags & ACTION_KEY_IS_PRESS) {
}


static void button_action_cb(void *action_data, void *data)
{
    action_button_data_t *button_data = (action_button_data_t *) action_data;
    xstroke_t *xstroke = (xstroke_t *) data;
    printf("button_action_cb: %d\n", button_data->button);
}

static void mode_action_cb(void *action_data, void *data)
{
    action_mode_data_t *mode_data = (action_mode_data_t *) action_data;
    xstroke_t *xstroke = (xstroke_t *) data;
    printf("mode_action_cb: %s %s\n", mode_data->mode->name, mode_data->permanent ? "lock" : "shift");
}

static void exec_action_cb(void *action_data, void *data)
{
    action_exec_data_t *exec_data = (action_exec_data_t *) action_data;
    printf("exec_action_cb: %s\n", exec_data->exec);
}


static void register_rec_callbacks(xstroke_t *xstroke)
{
    rec_register_callback(&xstroke->rec, ACTION_KEY,
			  key_action_cb, xstroke);
    rec_register_callback(&xstroke->rec, ACTION_BUTTON,
			  button_action_cb, xstroke);
    rec_register_callback(&xstroke->rec, ACTION_MODE,
			  mode_action_cb, xstroke);
    rec_register_callback(&xstroke->rec, ACTION_EXEC,
			  exec_action_cb, xstroke);
}
