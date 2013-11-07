// Include header file
#include "ButtonExecutor.h"

void checkButtons()
{
	bool pressed;
	pressed = onController1Button1(isBeingPressed(1,1));
	pressed = onController1Button4(isBeingPressed(1,4));
	pressed = onController2Button1(isBeingPressed(2,1));
	pressed = onController1Button2(isBeingPressed(1,2));
	pressed = onController2Button2(isBeingPressed(2,1));
	pressed = onController1Button5(isBeingPressed(1,5));
	pressed = onController1Button6(isBeingPressed(1,6));
	pressed  = onController1Button7(isBeingPressed(1,7));
	pressed = onController1Button8(isBeingPressed(1,8));
	pressed = onController1Button10(isBeingPressed(1,10));
	if (!(pressed))
	{
		onNothingBeingPressed();
	}
}
