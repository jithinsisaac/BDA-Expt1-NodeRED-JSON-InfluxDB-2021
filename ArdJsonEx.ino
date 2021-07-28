#include "ArduinoJson.h"

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{

      StaticJsonDocument<200> jsonDoc; 
      
      float temperature=30.5;
      float humidity=70;

      jsonDoc["temp"] = temperature;
      jsonDoc["humi"] = humidity;
   
      serializeJsonPretty(jsonDoc, Serial);
      Serial.println(); 

      delay(2000);
}
