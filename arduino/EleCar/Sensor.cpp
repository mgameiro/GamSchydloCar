#include "Sensor.h"

Sensor::Sensor(){
  
}

double Sensor::getBaseVoltage(){
  return this->measureAnalogPin(BASESENSORPIN)*5.0;
}

double Sensor::getMotorVoltage(){
  return this->measureAnalogPin(VOLTAGESENSORPIN)*5.0;
}

double Sensor::getMotorCurrent(){
  return this->measureAnalogPin(CURRENTSENSORPIN);
}

Sensor::~Sensor(){
  
}

double Sensor::measureAnalogPin(int apin){
  double rpin;
  rpin = (ARDUINOVOLTAGE/1023.0)*analogRead(apin);
  return rpin;
}

