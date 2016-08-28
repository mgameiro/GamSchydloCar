#ifndef ANALOGINPUT_H_INCLUDED
#define ANALOGINPUT_H_INCLUDED

#include "Arduino.h"

#define PINBATTERY 1
#define PINLEFTMOTOR 2
#define PINRIGHTMOTOR 3

class AnalogInput{

public:
  AnalogInput();

private:
  double readinputPinVoltage(int analogPin);

};

#endif
