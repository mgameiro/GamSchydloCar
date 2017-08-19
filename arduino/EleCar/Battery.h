#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Arduino.h"

#define BATTERYVOLTAGE 9.0
#define BATTERYMINCHARGED 0.70
#define PINBATTERY 0

class Battery{
  
  public:
    Battery();
    double getBatteryState();
    bool isBatteryCharged();
    ~Battery();

  private:
    double getBatteryVoltage();
  
};

#endif
