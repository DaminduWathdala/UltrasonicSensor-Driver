#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H
#include<Arduino.h>
class UltrasonicSensor{
    private:
      uint8_t m_trigpin;
      uint8_t m_echopin;
    public:
      UltrasonicSensor(uint8_t trigpin,uint8_t echopin);
      void begin();
      float getdistance();  
};

#endif