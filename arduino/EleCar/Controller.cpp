#include "Controller.h"

Controller::Controller(){
  this->motor1 = new Motor();
  this->motor2 = new Motor();
  this->battery = new Battery();
}

Controller::~Controller(){
  delete this->motor1;
  delete this->motor2;
  delete this->battery;
}

