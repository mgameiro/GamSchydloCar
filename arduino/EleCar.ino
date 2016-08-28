#include "Arduino.h"
#include "MotorConstants.h"
#include "AnalogInput.h"

double calculatePower(double Ua, double Ia){
  // Calculate the power consumed
  double Pin;
  Pin = Ua*Ia;
  return Pin;
}

double calculateSpeed(double Ua, double Ia){
  // Calculate the car speed from voltage and current
  double w,v;
  
  w = (Ua-Ra*Ia)/Kf;
  v = w*R;
  return v;
}

double readOutputVoltage(){
  // read the value of voltage at output
  
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  

}
