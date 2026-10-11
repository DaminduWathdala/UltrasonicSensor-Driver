#include "UltrasonicSensor.h"
UltrasonicSensor mysensor(5,18);
void setup(){
  Serial.begin(115200);
  mysensor.begin();
}

void loop(){
  float distance = mysensor.getdistance();
  if(distance>0){Serial.print("Distance :");
                 Serial.println(distance);  }
  else{Serial.printf("Out of the Range");}
  delay(500);
}