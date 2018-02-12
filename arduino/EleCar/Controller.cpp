#include "Controller.h"

Controller::Controller(controllerType type){
  int i;
  
  // Defining type of controller
  this->type = type;
  // Motor Allocation
  this->motor = new Motor();
  //Sensor Allocation
  this->sensor = new Sensor();
  //Battery Allocation
  this->battery = new Battery();
  // Speed logger
  this->Vref = 0.0;
  // Current logger
  this->k = 0;
  this->Pref = PREF;
  for (i=0; i < 10; i++){
    this->Pmotor[i] = 0.0;
  }
}

void Controller::setReferenceSpeed(double Vref){
  this->Vref = Vref;
}

double Controller::updateLinearVoltage(){
  double Verror, Ub;

  //Get speed error at the system
  Verror = this->getSpeedError();
  //Calculate new speed
  Ub = m*Verror + b;

  return Ub;
}

double Controller::updatePowerPID(){
  double Perror;
  
  // Get power from sensors
  Perror = this->getPowerError();
  //Proportional control
  //up[k] = Kp
  
}

void Controller::printSensorsData(){
  double Ub, U, I;

  //Get sensors' data
  Ub = this->sensor->getBaseVoltage();
  U = this->sensor->getMotorVoltage();
  I = this->sensor->getMotorCurrent();
  //Print data at serial monitor
  Serial.print("Ub: ");
  Serial.print(Ub);
  Serial.print("V Voltage: ");
  Serial.print(U);
  Serial.print("V Current: ");
  Serial.print(" ");
  Serial.print(I*1000.0);
  Serial.println("mA");
}

void Controller::scanCycleController(){
  //Observer action
  
  //Controller action
  if (this->k%10 == 0){
    
  }  
}

Controller::~Controller(){
  delete this->motor;
  delete this->sensor;
  delete this->battery;
}

double Controller::getSpeedError(){
  double Verror, Vsensor;

  //Get real speed from the sensor
  Vsensor = 0.0;
  //Calculate the error from speed
  Verror = this->Vref - Vsensor;

  return Verror;
}

double Controller::getPowerError(){
  double Perror, Psensor;
  double Usensor, Isensor;

  //Get power from sensors
  Usensor = this->sensor->getMotorVoltage();
  Isensor = this->sensor->getMotorCurrent();
  Psensor = Usensor*Isensor;
  //Calculate the error from current
  Perror = this->Pref - Psensor;

  return Perror;
}

