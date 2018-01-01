#include "Arduino.h"
#include "Controller.h"

Controller *controller;

void setup() {
  //Starting serial connection
  Serial.begin(9600);
  Serial.println("Starting system...");
  //Starting main controller
  controller = new Controller(Linear);
  
}

void loop() {
  
}
