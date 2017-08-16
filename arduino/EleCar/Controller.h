#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "Motor.h"
#include "Sensor.h"
#include "Battery.h"

class Controller{
  Motor *motor;
  Sensor *sensor;
  Battery *battery;

  public:
    Controller();
    ~Controller();
  
};

#endif
