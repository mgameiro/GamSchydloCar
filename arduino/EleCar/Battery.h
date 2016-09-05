#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Arduino.h"
#include "AnalogInput.h"

#define BATTERYVOLTAGE 5
#define BATTERYMINCHARGED 0.8*BATTERYVOLTAGE

class Battery{

  AnalogInput ai;
  
public:
  Battery();
  bool isBatteryCharged();
  
};

#endif
