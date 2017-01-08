#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Arduino.h"

#define BATTERYVOLTAGE 5
#define BATTERYMINCHARGED 0.8*BATTERYVOLTAGE
#define PINBATTERY 0

class Battery{
  
  public:
    Battery();
    bool isBatteryCharged();
    ~Battery();

  private:
    double getBatteryVoltage();
  
};

#endif
