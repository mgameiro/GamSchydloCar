#include "Arduino.h"
#include "Timer1.h"
#include "Controller.h"
#include "Matrix.h"

#include "Motor.h"

Motor *motor;
Controller *controller;
unsigned long ms, ams;
Matrix *M;

void setup() {
  //Interrupts initialization
  cli(); //stop all interrupts
  initTimer1(1); //init timer for the controller
  sei(); //allow interrupts
  ms = millis(); //init debugging
  //Starting serial connection
  Serial.begin(9600);
  Serial.println("Starting system...");
  //Starting main controller
  controller = new Controller(Linear);
  motor = new Motor();
  motor->setBaseVoltage(5.0);

  M = new Matrix(2,2);
  M->testPerform();
  
}

ISR(TIMER1_COMPA_vect){
  //Serial.println("Interrupt!");
  controller->scanCycleController();
  
}

void loop() {

}
