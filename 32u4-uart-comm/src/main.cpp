#include <Arduino.h>

void setup() 
{
  Serial.begin(115200);

  Serial1.begin(9600);
}

void loop() 
{
  while (Serial1.available()) 
  {
    Serial1.print('\n');
    char a = Serial1.read();

    Serial1.print(a);
    Serial.print(a);
  }
  
  while (Serial.available()) 
  {
    Serial1.print(char(Serial.read()));
  }
}