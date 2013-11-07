// Include header file
#include "MotorDriver.h"

void oneJoystickControls()
{

}

void twoJoystickControls()
{
	int y1Value = joystick.joy1_y1;
	int y2Value = joystick.joy1_y2;
	if (abs(y1Value) < DEAD_ZONE)
	{
		y1Value = 0;
	}
	if (abs(y2Value) < DEAD_ZONE)
	{
		y2Value = 0;
	}
	setMotorSpeed(LEFT_MOTOR, y1Value);
	setMotorSpeed(RIGHT_MOTOR, y2Value);
}
