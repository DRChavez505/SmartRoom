/*
 * Project SmartRoom
 * Description: SmartRoom Project 
 * Author: Dan Chavez
 * Date: 7-MAR-2023
 */
#include "IoTClassroom_CNM.h"
#include "colors.h"
#include "neopixel.h"
#include "math.h"
Adafruit_NeoPixel pixel (WS2812B);

const int MYWEMO=0;
const int pixelPin=D2;
const int relayPin=D3;
const int laserPin=D4;
const int photoPin=A2;
int photoValue;
bool RelayState;
int relayHigh;

SYSTEM_MODE(MANUAL);
void setup() 
{
  Serial.begin(9600);
waitFor(Serial.isConnected,15000);
  WiFi.on();
  WiFi.setCredentials("IoTNetwork");
  WiFi.connect();
  while(WiFi.connecting()) 
  {
    Serial.printf(".");
  }
  delay(1000);
  Serial.printf("\n\n");
}
void loop()
{ledBrightness=map(relayLow);
pixel.setBrightness(pixelBrightness);
pixelFill(startPixel.endpixel, 0xFFFF00)
(delay,200);
(pixelClear)
}
{
    Serial.printf("Turning on Wemo# %i\n",MYWEMO);
    switchON(MYWEMO);
    delay(5000);
    Serial.printf("Turning off Wemo# %i\n",MYWEMO);
    switchOFF(MYWEMO);
    delay(5000);
}
{
  digitalWrite(laserPin, HIGH);
  photoValue=analogRead(photoPin);
    pinMode(laserPin, OUTPUT);
  pinMode(photoPin, INPUT);
  Serial.printf("photoValue=analogRead %d\r",photoValue);
  delay(1000);
  }