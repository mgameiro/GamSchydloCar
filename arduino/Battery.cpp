#include "Battery.h"

Battery::Battery(){
  
}

bool Battery::isBatteryCharged(){
  // Verify battery state (charged or not)
  bool charged;
  double ub;
  ub = this->ai.readinputPinVoltage(PINBATTERY);
  if(ub >= BATTERYMINCHARGED){
    charged = true;
  } else {
    charged = false;
  }
  return charged;
}

