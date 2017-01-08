#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED

#include "Arduino.h"

// DC Motor constants
#define Ra 7.5
#define Kf 1.1234
#define Kt 0.8827
// Car physical constants
#define M 0.5
#define R 0.003

class Motor{

  public:
    Motor();
    ~Motor();
    
  private:
    
};


#endif
