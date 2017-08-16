#include "Sensor.h"

Sensor::Sensor(){
  
}

double Sensor::getMotorVoltage(){
  return this->measureAnalogPin(VOLTAGESENSORPIN);
}

double Sensor::getMotorCurrent(){
  return this->measureAnalogPin(CURRENTSENSORPIN);
}

Sensor::~Sensor(){
  
}

double Sensor::measureAnalogPin(int apin){
  double apin;
  rpin = (5.0/1023.0)*analogRead(apin);
  return rpin;
}

