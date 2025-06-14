#include <Arduino.h>

#include "interface.h"

#include "rec.h"

rec_t rec;

enum RecognitionResultType rec_current_res;
union RecognitionResult {
  const char *key;
  int button;
  struct {
    int permanent;
    char* mode;
  };
} rec_result;

static void reset_rec_state() {
  rec_current_res = NO_RESULT;
}

static void key_action_cb(void *action_data, void *data)
{
    action_key_data_t *key_data = (action_key_data_t *) action_data;
    rec_current_res = KEY_PRESSED;
    rec_result.key = XKeysymToString(key_data->keysym);
}

static void button_action_cb(void *action_data, void *data)
{
    action_button_data_t *button_data = (action_button_data_t *) action_data;
    rec_current_res = BUTTON_PRESSED;
    rec_result.button = button_data->button;
}

static void mode_action_cb(void *action_data, void *data)
{
    if (rec_current_res != NO_RESULT) return;
    
    action_mode_data_t *mode_data = (action_mode_data_t *) action_data;
    rec_current_res = MODE_CHANGE;
    rec_result.permanent = mode_data->permanent;
    rec_result.mode = mode_data->mode->name;
}


void recognition_setup(int width, int height) {
  rec_init(&rec, width, height);
  reset_rec_state();
  rec_register_callback(&rec, ACTION_KEY, key_action_cb, NULL);
  rec_register_callback(&rec, ACTION_BUTTON, button_action_cb, NULL);
  rec_register_callback(&rec, ACTION_MODE, mode_action_cb, NULL);
}

void recognition_start(int x, int y) {
  reset_rec_state();
  rec_begin_stroke(&rec, x, y, millis());
}

void recognition_move(int x, int y) {
  reset_rec_state();
  rec_extend_stroke(&rec, x, y, millis());
}

void recognition_end(int x, int y) {
  reset_rec_state();
  rec_end_stroke(&rec, x, y, millis());
}

enum RecognitionResultType recognition_get_result() {
  return rec_current_res;
}

const char* recognition_get_key() {
  if (rec_current_res != KEY_PRESSED) return NULL;
  return rec_result.key;
}

int recognition_get_button() {
  if (rec_current_res != BUTTON_PRESSED) return 0;
  return rec_result.button;
}

void recognition_get_mode(int* permanent, const char** mode) {
  if (rec_current_res != MODE_CHANGE) {
    *permanent = 0;
    *mode = NULL;
  } else {
    *permanent = rec_result.permanent;
    *mode = rec_result.mode;
  }
}