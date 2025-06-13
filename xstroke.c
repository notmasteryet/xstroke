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
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <math.h>

#include "xstroke.h"
#include "rec.h"

#ifdef DMALLOC
#include "dmalloc.h"
#endif

const int DisplayWidth = 1000;
const int DisplayHeight = 1000;

static int xstroke_init(xstroke_t * xstroke, args_t *args);
static void xstroke_deinit(xstroke_t *xstroke);
static void key_action_cb(void *action_data, void *data);
static void button_action_cb(void *action_data, void *data);
static void mode_action_cb(void *action_data, void *data);
static void exec_action_cb(void *action_data, void *data);

static void initialize_modifiers(xstroke_t *xstroke);
static void register_rec_callbacks(xstroke_t *xstroke);

static void draw_stroke_box(xstroke_t *xstroke);
#ifdef XSTROKE_DEBUG_ROTATION
static void draw_stroke(xstroke_t *xstroke, stroke_t *stroke);
#endif

static args_t args;

int main(int argc, char *argv[])
{
    int optind;
    int err;
    xstroke_t xstroke;

    args_init(&args);

    err = xstroke_init(&xstroke, &args);
    if (err) {
	fprintf(stderr, "%s: An error occurred during xstroke_init\n", __FUNCTION__);
	return err;
    }

    if (args.verify) {
	rec_verify(&xstroke.rec, args.verify);
    }

    
    rec_begin_stroke(&xstroke.rec, 100, 900, 0);
    rec_extend_stroke(&xstroke.rec, 500, 99, 100);
    rec_extend_stroke(&xstroke.rec, 999, 999, 200);
    rec_end_stroke(&xstroke.rec, 999, 999, 300);


    xstroke_deinit(&xstroke);
    args_deinit(&args);

    return err;
}

static int xstroke_init(xstroke_t * xstroke, args_t *args)
{
    int err;
    struct stat stat_buf;
    int scr;

#ifdef XSTROKE_DEBUG
    fprintf(stderr, "WARNING: xstroke compiled with XSTROKE_DEBUG defined.\n\tThis may have a negative impact on performance.\n\tOh no!! (Emphasis by Stacy)\n");
#endif

    err = stat(args->alphabet, &stat_buf);
    if (err) {
	if (errno != ENOENT) {
	    fprintf(stderr, "%s: Warning: failed to stat %s: %s.\n",
		    __FUNCTION__, args->alphabet, strerror(errno));
        return err;
    }
    }
    err = rec_init(&xstroke->rec, args,
		   DisplayWidth, DisplayHeight);
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


// void xstroke_button_press(xstroke_t *xstroke, XButtonEvent *bev)
// {
//     rec_begin_stroke(&xstroke->rec, bev->x_root, bev->y_root, bev->time);
// }

// void xstroke_motion_notify(xstroke_t *xstroke, XMotionEvent *mev)
// {
//     rec_extend_stroke(&xstroke->rec, mev->x_root, mev->y_root, mev->time);
// }

// void xstroke_button_release(xstroke_t *xstroke, XButtonEvent *bev)
// {
//     rec_end_stroke(&xstroke->rec, bev->x_root, bev->y_root, bev->time);
// }


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
    printf("button_action_cb\n");
}

static void mode_action_cb(void *action_data, void *data)
{
    action_mode_data_t *mode_data = (action_mode_data_t *) action_data;
    xstroke_t *xstroke = (xstroke_t *) data;
    printf("mode_action_cb\n");
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
