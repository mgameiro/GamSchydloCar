#include "Battery.h"

Battery::Battery(){
  
}

double Battery::getBatteryState(){
  double ub;
  ub = this->getBatteryVoltage();
  return ub/BATTERYVOLTAGE;
}

bool Battery::isBatteryCharged(){
  // Verify battery state (charged or not)
  bool charged;
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
  ub = (5.0/1024.0)*analogRead(PINBATTERY);
  return ub;
}

