#ifndef CGHSOpenHouse_h
#define CGHSOpenHouse_h
// Includes
#include "MotorDriver.c"
#include "ButtonExecutor.c"
// Macros
#define setRaisingEnabled(x) raisingEnabled = x
#define isSoundActive bSoundActive
#define setRunning(x) running = x
// Methods
void preInit();
void postInit();
void updateDisplay();
// Vars
int currentPower = 25;
bool running = false;
#endif
