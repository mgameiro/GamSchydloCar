#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED

#include "Arduino.h"
#include "AnalogInput.h"

class Motor{

  AnalogInput ai;

public:
  Motor();
  
private:
  double getMotorLeftVoltage();
  double getMotorRightVoltage();
};


#endif
