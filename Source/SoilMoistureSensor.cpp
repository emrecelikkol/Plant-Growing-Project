/*
 * SoilMoistureSensor.cpp
 *
 *  Created on: 4 Mar 2018
 *      Author: emre
 */

#include "../Headers/SoilMoistureSensor.h"

SoilMoistureSensor::SoilMoistureSensor(int pin){
	analogReadPin=pin;
	pinMode(analogReadPin, INPUT);
}


int SoilMoistureSensor::readValue(){
	return analogRead(analogReadPin);
}
