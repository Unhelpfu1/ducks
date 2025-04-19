//Opens a funny joke and makes sure you can hear it
#include "DigiKeyboard.h" //I added definitions for right arrow key, tab, and esc, so this wont work unless you add that too
void setup() {
}

void loop() {
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(10);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(150);
 DigiKeyboard.print("explorer \"https://www.youtube.com/watch?v=AXtNUgEWgQI\"");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(5000);
 DigiKeyboard.sendKeyStroke(KEY_F);
 DigiKeyboard.delay(150);
 DigiKeyboard.sendKeyStroke(KEY_B, MOD_GUI_LEFT);
 DigiKeyboard.delay(150);
 DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
 DigiKeyboard.delay(10);
 DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
 DigiKeyboard.delay(10);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(25);
 DigiKeyboard.sendKeyStroke(KEY_TAB);
 DigiKeyboard.delay(10);
 for (int i = 0; i < 75; i++){
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.delay(15);
 }
 DigiKeyboard.sendKeyStroke(KEY_ESC);
 for (;;) {
 /*empty*/
}
}
