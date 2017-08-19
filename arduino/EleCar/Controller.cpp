#include "Controller.h"

Controller::Controller(controllerType type){
  // Defining type of controller
  this->type = type;
  // Defining initial point
  this->Vref = 0.0;
  // Motor Allocation
  this->motor = new Motor();
  //Sensor Allocation
  this->sensor = new Sensor();
  //Battery Allocation
  this->battery = new Battery();
}

Controller::~Controller(){
  delete this->motor;
  delete this->sensor;
  delete this->battery;
}

double Controller::getSpeedError(){
  double Verror, Vsensor;

  //Get real speed from the sensor
  Vsensor = 0.0;
  //Calculate the error from speed
  Verror = this->Vref - Vsensor;

  return Verror;
}

double Controller::updateLinearVoltage(){
  double Verror, Ub;

  //Get speed error at the system
  Verror = this->getSpeedError();
  //Calculate new speed
  Ub = m*Verror + b;

  return Ub;
}

