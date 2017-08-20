#include "Controller.h"

Controller::Controller(controllerType type){
  int i;
  
  // Defining type of controller
  this->type = type;
  
  // Motor Allocation
  this->motor = new Motor();
  //Sensor Allocation
  this->sensor = new Sensor();
  //Battery Allocation
  this->battery = new Battery();
  // Speed logger
  this->Vref = 0.0;
  // Current logger
  this->k = 0;
  this->Iref = 0.0;
  for (i=0; i < 10; i++){
    this->Imotor[i] = 0.0;
  }
}

double Controller::updateLinearVoltage(){
  double Verror, Ub;

  //Get speed error at the system
  Verror = this->getSpeedError();
  //Calculate new speed
  Ub = m*Verror + b;

  return Ub;
}

double Controller::updateCurrentPID(){

  //Proportional control
  //up[k] = Kp
  
}

Controller::~Controller(){
  delete this->motor;
  delete this->sensor;
  delete this->battery;
}

double Controller::getCurrentError(){
  double Ierror, Isensor;

  //Get real current from the sensor
  Isensor = this->sensor->getMotorCurrent();
  //Calculate the error from current
  Ierror = this->Iref - Isensor;

  return Ierror;
}

double Controller::getSpeedError(){
  double Verror, Vsensor;

  //Get real speed from the sensor
  Vsensor = 0.0;
  //Calculate the error from speed
  Verror = this->Vref - Vsensor;

  return Verror;
}

