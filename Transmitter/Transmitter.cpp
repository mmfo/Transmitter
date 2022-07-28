#pragma once
#include <iostream>
#include <vector>
#include "../../COMMON/IDD.h"
#include "../../COMMON/class/Antenna.h"
#include "../../COMMON/class/Amplifier.h"
#include "../../COMMON/class/Modem.h"
#include "../../COMMON/class/Manager.h"

using namespace std;
int main()
{
	vector <ControllerType> controllers = {
		CONTROLLER_TYPE_AMPLIFIER,
		CONTROLLER_TYPE_ANTENNA,
		CONTROLLER_TYPE_MODEM
	};
	Amplifier amplifier(TRANSMITTER); 
	Antenna antenna(TRANSMITTER);
	Modem modem(TRANSMITTER);
	Manager manager(controllers, TRANSMITTER);

	//wait forever
	while (TRUE)
		this_thread::sleep_for(chrono::milliseconds(1000));
	return 0;
}