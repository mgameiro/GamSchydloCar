#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Arduino.h"
#include "AnalogInput.h"

#define BATTERYMINCHARGED 4

class Battery{

  AnalogInput ai;
  
public:
  Battery();
  bool isBatteryCharged();
  
};

#endif
