#include "Battery.h"

Battery::Battery(){
  this->state = charged;
}

batteryState Battery::getBatteryState(){
  
}

bool Battery::isBatteryCharged(){
  // Verify battery state (charged or not) and return boolean value
  bool charged;
  // Check minimum value for the battery
  if(getBatteryState() >= BATTERYMINCHARGED*BATTERYVOLTAGE){
    charged = true;
  } else {
    charged = false;
  }
  return charged;
}

Battery::~Battery(){

}

double getBatteryVoltage(){
  double ub;
  ub = (5.0/1023.0)*analogRead(PINBATTERY);
  return ub;
}

