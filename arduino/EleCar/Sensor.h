#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

//---------------------------------------------------------------
//    Class: Sensor
//
//      This class defines parameters and behaviour of all sensors
//      coupled with the arduino, as well as all pre-processing
//      which is necessary for measuring the signals.
//
//      Sensors used: voltage, current
//---------------------------------------------------------------

#include "Arduino.h"

#define ARDUINOVOLTAGE 5.0
#define VOLTAGESENSORPIN 1
#define CURRENTSENSORPIN 2

class Sensor{

  public:
    Sensor();
    double getMotorVoltage();
    double getMotorCurrent();
    ~Sensor();
  
  private:
    double measureAnalogPin(int apin);
};


#endif
