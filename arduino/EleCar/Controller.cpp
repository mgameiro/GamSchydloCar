#include "Controller.h"

Controller::Controller(controllerType type){
  // Defining type of controller
  this->type = type;
  //Motor Allocation
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

