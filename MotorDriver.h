#ifndef MotorDriver_h
#define MotorDriver_h
// Includes
#ifndef JoystickDriver
#define JoystickDriver
#include "JoystickDriver.c"
#endif
// Vars
#define MAX_SPEED 100
#define HALF_MAX_SPEED MAX_SPEED / 2
#define STOP_MOTOR 0
#define LEFT_MOTOR leftMotor
#define LEFT_SERVO leftServo
#define RIGHT_MOTOR rightMotor
#define RIGHT_SERVO rightServo
int DEAD_ZONE = 10;
// Macros
#define resetEncoderCount(x) nMotorEncoder[x] = 0
#define setMotorSpeed(x,y) motor[x] = y
#define setDeadZone(x) DEAD_ZONE = x
#define getCurrentSpeed(x) motor[x]
// Methods
void oneJoystickControls();
void twoJoystickControls();
#endif
