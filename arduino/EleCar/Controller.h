#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "Motor.h"
#include "Sensor.h"
#include "Battery.h"

// Types of controllers
typedef enum controllerType{
  Linear, PID, NeuralNetwork
};

class Controller{
  // Type of controller
  controllerType type;
  // Variables of controller
  Motor *motor;
  Sensor *sensor;
  Battery *battery;

  public:
    Controller(controllerType type);
    ~Controller();
  
};

#endif
