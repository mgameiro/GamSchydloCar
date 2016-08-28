#include"AnalogInput.h"

AnalogInput::AnalogInput(){
  
}

double AnalogInput::readinputPinVoltage(int analogPin){
  // read the value of voltage at input pin (0-5V)
  double U;
  U = analogRead(analogPin);
  return U*(5/1024);
}
