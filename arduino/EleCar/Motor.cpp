#include "Motor.h"

Motor::Motor(){
  
}

void Motor::setVoltage(double Ua){
  this->Ua = Ua;
}

void Motor::setLoadTorque(double Tc){
  this->Tc = Tc;
}

double Motor::calcCurrent(){
  double I;
  I = Ra*this->Ua + Km*this->Tc;
  return I;
}

Motor::~Motor(){
  
}

