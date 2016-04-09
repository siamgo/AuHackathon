#include "Arduino.h"

Arduino::Arduino(Serial* port)
{
	_arduino = port;
}

void Arduino::SendPosition(myo::Pose pose)
{
	if (pose == pose.fist)
		_arduino->WriteData("fist", 4);
	else if (pose == pose.waveIn)
		_arduino->WriteData("wavein", 6);
	else if (pose == pose.doubleTap)
		_arduino->WriteData("double", 6);
	else if (pose == pose.waveOut)
		_arduino->WriteData("waveout", 7);
	else if (pose == pose.fingersSpread)
		_arduino->WriteData("fingers", 7);
	else
		printf("Unknown position sent");
}