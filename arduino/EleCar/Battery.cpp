#include "Battery.h"

Battery::Battery(){
  
}

bool Battery::isBatteryCharged(){
  // Verify battery state (charged or not)
  bool charged;
  double ub;
  ub = (5.0/1024.0)*analogRead(PINBATTERY);
  if(ub >= BATTERYMINCHARGED){
    charged = true;
  } else {
    charged = false;
  }
  return charged;
}

