#include "UltrasonicSensor.h"
UltrasonicSensor :: UltrasonicSensor(uint8_t trigpin,uint8_t echopin):m_trigpin(trigpin),m_echopin(echopin){}
void UltrasonicSensor::begin(){
    pinMode(m_echopin,INPUT);
    pinMode(m_trigpin,OUTPUT);

}

float UltrasonicSensor::getdistance(){
    digitalWrite(m_trigpin,LOW);
    delayMicroseconds(5);
    digitalWrite(m_trigpin,HIGH);
    delayMicroseconds(30);
    digitalWrite(m_trigpin,LOW);
    
    unsigned long duration = pulseIn(m_echopin,HIGH,30000);
    if(duration==0){return -1.0;}
    float distance = duration *0.0343/2;
    return distance;
}
