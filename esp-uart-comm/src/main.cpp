#include <Arduino.h>

void setup() 
{
  Serial.begin(115200);

  // On the ESP32, you can redefine UARTs if you want, but
  // this will default to 8N1, RXD2 on pin 16; TXD2 on pin 17
  Serial2.begin(115200);
}

void loop() 
{
  while (Serial2.available()) 
  {
    Serial.print(char(Serial2.read()));
  }
  while (Serial.available()) 
  {
    Serial2.print(char(Serial.read()));
  }
}