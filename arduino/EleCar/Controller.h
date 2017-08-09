#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "Motor.h"
#include "Battery.h"

class Controller{
  //Motors included
  Motor *motor;
  //Battery 
  Battery *battery;

  public:
    Controller();
    ~Controller();
  
};

#endif
