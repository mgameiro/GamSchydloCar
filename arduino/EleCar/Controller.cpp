#include "Controller.h"

Controller::Controller(){
  //Motor Allocation
  this->motor = new Motor();
  //Battery Allocation
  this->battery = new Battery();
}

Controller::~Controller(){
  delete this->motor;
  delete this->battery;
}

