#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

#include "Arduino.h"

class PWM{

public:
  PWM();
  bool setOutputAnalogVoltage(int analogPin,double U);
  
private:


};

#endif
