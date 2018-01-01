#ifndef BATTERY_H_INCLUDED
#define BATTERY_H_INCLUDED

#include "Arduino.h"


// Defining state of battery
typedef enum batteryState{
  charged, empty
};
// Defining constants
#define BATTERYVOLTAGE 9.0
#define BATTERYMINCHARGED 0.70
#define PINBATTERY 0

class Battery{
  batteryState state;
  
  public:
    Battery();
    batteryState getBatteryState();
    bool isBatteryCharged();
    ~Battery();

  private:
    double getBatteryVoltage();
  
};

#endif
