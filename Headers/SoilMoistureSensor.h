#ifndef SoilMoistureSensor_h
#define SoilMoistureSensor_h

#include "Arduino.h"

class SoilMoistureSensor{

private:
	int analogReadPin;

public:
	SoilMoistureSensor(int pin);
	int readValue();


};



#endif
