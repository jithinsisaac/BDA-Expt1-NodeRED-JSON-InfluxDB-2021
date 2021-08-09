#include "ArduinoJson.h"
void setup() 
{
  Serial.begin(115200);
}

      float temperature=0;
      float humidity=0;
      float pressure = 1000;
      
void loop() 
{
      StaticJsonDocument<200> jsonDoc; 
      
      jsonDoc["temp"] = temperature;
      jsonDoc["humi"] = humidity;
      jsonDoc["pressure"] = pressure;
   
      serializeJsonPretty(jsonDoc, Serial);
      Serial.println(); 

      temperature++;
      humidity++;
      
      if(temperature ==40)
     {   temperature =0;}
        
      if(humidity ==100)
        {humidity =0;}
        
      delay(2000);
}
