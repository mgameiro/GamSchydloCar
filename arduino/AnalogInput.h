#ifndef ANALOGINPUT_H_INCLUDED
#define ANALOGINPUT_H_INCLUDED

#include "Arduino.h"

#define PINBATTERY 1
#define PINLEFTMOTOR 2
#define PINRIGHTMOTOR 3

class AnalogInput{

public:
  AnalogInput();
  double readinputPinVoltage(int analogPin);

private:
  

};

#endif
