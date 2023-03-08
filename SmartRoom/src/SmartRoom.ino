/*
 * Project midTerm_dChavez
 * Description:midTerm Project 
 * Author: Dan Chavez
 * Date: 7-MAR-2023
 */

#include "IoTClassroom_CNM.h"
#include "neopixel.h

const int neoPixel=D3;
const int photoPin=A2;
const int laserPin=D4;
int photoValue;
SYSTEM_MODE(SEMI_AUTOMATIC);

// setup() runs once, when the device is first turned on.
void setup() {
  Serial.begin(9600);
  pinMode(laserPin, OUTPUT);
  pinMode(photoPin, INPUT);
  // Put initialization like pinMode and begin functions here.
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(laserPin, HIGH);
  photoValue=analogRead(photoPin);
  Serial.printf("photoValue=analogRead %d\r",photoValue);
  delay(1000);

  // The core of your code will likely live here.
}