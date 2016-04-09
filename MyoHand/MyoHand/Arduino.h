#pragma once
#include "SerialClass.h"
#include "myo.hpp"


class Arduino: public Serial
{
public:
	Arduino(Serial* port);
	void SendPosition(myo::Pose pose);

private:

	Serial* _arduino;
};