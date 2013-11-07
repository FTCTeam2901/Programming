#ifndef ButtonExecutor_h
#define ButtonExecutor_h
// Includes
#ifndef JoystickDriver
#define JoystickDriver
#include "JoystickDriver.c"
#endif
// Macros
#define isBeingPressed(x,y) x == 1 ? joy1Btn(y) : joy2Btn(y)
#define setAmountOfButtonsUsed(x) AMOUNT_OF_BUTTONS_USED = x
// Vars
int AMOUNT_OF_BUTTONS_USED;
bool btn1Controller1BeingPressed, btn2Controller1BeingPressed, btn3Controller1BeingPressed, btn4Controller1BeingPressed, btn10Controller1BeingPressed = false;
// Methods
bool onController1Button1(bool isPressed);
bool onController1Button2(bool isPressed);
bool onController1Button5(bool isPressed);
bool onController1Button6(bool isPressed);
bool onController1Button7(bool isPressed);
bool onController1Button8(bool isPressed);
bool onController1Button10(bool isPressed);
bool onController1Button4(bool isPressed);
bool onController2Button1(bool isPressed);
bool onController2Button2(bool isPressed);
void onNothingBeingPressed();
#endif
