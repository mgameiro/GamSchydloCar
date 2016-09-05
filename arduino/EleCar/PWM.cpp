#include "PWM.h"

PWM::PWM(){
  
}

bool PWM::setOutputAnalogVoltage(int analogPin,double U){
  if ((U >= 0) && (U <= 5)){
    analogWrite(analogPin,U/5);
    return true;
  }
  return false; 
}

