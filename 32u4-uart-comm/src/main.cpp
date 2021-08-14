#include <Arduino.h>

void setup() 
{
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() 
{
  while (Serial1.available()) 
  {
    char a = Serial1.read();
    Serial.print(a);
  }

  while (Serial.available()) 
  {
    Serial1.print(char(Serial.read()));
  }
}