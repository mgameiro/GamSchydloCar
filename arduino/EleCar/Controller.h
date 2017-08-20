#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "Motor.h"
#include "Sensor.h"
#include "Battery.h"

// Types of controllers
typedef enum controllerType{
  Linear, PID, NeuralNetwork
};
// Linear Controller
#define m 1.0
#define b 0.0
// PID Controller
#define Kp 1.0
#define Ki 1.0
#define Kd 1.0

class Controller{
  // Type of controller
  controllerType type;
  // Variables of controller
  Motor *motor;
  Sensor *sensor;
  Battery *battery;
  // Instant 
  int k;
  // Reference point (Linear and PID)
  double Vref;
  // Current PID and logger
  double Iref;
  double Imotor[10];

  public:
    Controller(controllerType type);
    //Linear Controller
    double updateLinearVoltage();
    //Current PID
    double updateCurrentPID();
    ~Controller();

  private:
    double getCurrentError();
    double getSpeedError();
  
};

#endif
