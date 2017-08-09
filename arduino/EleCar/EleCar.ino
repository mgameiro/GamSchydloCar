#include "Arduino.h"
#include "Controller.h"

Controller *controller;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  controller = new Controller();
}

void loop() {
  // put your main code here, to run repeatedly:
  double d;
  
  /*d = analogRead(0);
  Serial.print(d);
  Serial.print(" ");
  Serial.println(d*5.0/1024.0);*/
}
