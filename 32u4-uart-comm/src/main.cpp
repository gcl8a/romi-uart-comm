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
    //Serial1.print('\n');
    int a = Serial1.read();

    //Serial1.print(a);
    Serial.println(a, HEX);
  }

  while (Serial.available()) 
  {
    Serial1.print(char(Serial.read()));
  }

  static uint32_t lastPub = 0;
  if(millis() - lastPub >= 500 ) 
  {
    lastPub = millis();
    char message[20];
    sprintf(message, "%li,%i\n", millis()%1000, analogRead(A0));
    //Serial1.print(message);
    //publishSerialData(message);
  }
}