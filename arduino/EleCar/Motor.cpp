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


bool Motor::setBaseVoltage(double Ub){
  int duty;
  
  //Verify if asked voltage is at the range
  if((Ub >= VMIN) && (Ub <= VMAX)){
    //Convert voltage to duty cycle
    duty = (255.0/VMAX)*Ub;
    //Value at the output
    analogWrite(MOTORPIN,(int)duty);
    return true;
  }
  return false;
}

