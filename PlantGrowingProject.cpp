#include <Arduino.h>
#include "Headers/SoilMoistureSensor.h"
#include "./Headers/dht.h"

SoilMoistureSensor s1=new SoilMoistureSensor(A0);
int toprakNem=0;
dht DHT;

#define DHT11_PIN 7


void setup() {

	Serial.begin(9600);
}

void loop() {

	toprakNem=1000-s1.readValue();

	Serial.println("--------------------");
	for(int i=0;i<toprakNem;i+=50)
		Serial.print("#");

	Serial.println("\n--------------------");
	Serial.println(s1.readValue());
	Serial.print("\n\n\n\n");
	delay(2000);

	int chk = DHT.read11(DHT11_PIN);
	Serial.print("Temperature = ");
	Serial.println(DHT.temperature);
	Serial.print("Humidity = ");
	Serial.println(DHT.humidity);
	delay(1000);


}

