#ifndef _INTERFACE_H
#define _INTERFACE_H

enum RecognitionResultType {
  NO_RESULT = 0,
  KEY_PRESSED = 1,
  BUTTON_PRESSED = 2,
  MODE_CHANGE = 3,
};

#ifdef __cplusplus
extern "C" {
#endif
void recognition_setup(int width, int height);
void recognition_start(int x, int y);
void recognition_move(int x, int y);
void recognition_end(int x, int y);
enum RecognitionResultType recognition_get_result();
const char* recognition_get_key();
int recognition_get_button();
void recognition_get_mode(int* permanent, const char** mode);
#ifdef __cplusplus
}
#endif

#endif