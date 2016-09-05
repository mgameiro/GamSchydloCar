#include "Motor.h"

Motor::Motor(){
  
}

double Motor::getMotorLeftVoltage(){
  return this->ai.readinputPinVoltage(PINLEFTMOTOR);
}

double Motor::getMotorRightVoltage(){
  return this->ai.readinputPinVoltage(PINRIGHTMOTOR);
}

