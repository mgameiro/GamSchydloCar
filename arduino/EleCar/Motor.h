#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED

#include "Arduino.h"
#include "Matrix.h"

// DC Motor constants
#define Ra 2.75
//#define Kf 1.1234
//#define Kt 0.8827
#define Km 0.2602
#define B 0.0025
// Car physical constants
#define Mass 0.5
#define Radius 0.003
// Motor Connections
#define MOTORPIN 11
#define VCC 9.0
// Arduino Constants
#define VMIN 0.0
#define VMAX 5.0


class Motor{
  //Steady-state point
  double Ua = 0;
  double Tc = 0;
  

  public:
    Motor();
    void setVoltage(double Ua);
    void setLoadTorque(double Tc);
    double calcCurrent();
    ~Motor();

    bool setBaseVoltage(double Ub);
    
  private:
    //bool setBaseVoltage(double Ub);
    
};


#endif
