#include <AFMotor.h>
AF_DCMotor motor3(3, MOTOR12_64KHZ);
AF_DCMotor motor4(1, MOTOR12_64KHZ);

#include <NewPing.h>

#define max_cm_distance 40

int trigPin = 14;
int echoPin = 15;

long distanz;
long distanz_cm;

NewPing sonar(trigPin, echoPin, max_cm_distance);

void setup(){
  
  motor3.setSpeed(500);
  motor4.setSpeed(500);
}

void loop(){
  delay(1000);
 
  distanz_cm = sonar.ping_cm();
 
  if ( distanz_cm == 0 ) {
      delay(100);
      pinMode(echoPin, OUTPUT);
      digitalWrite(echoPin, LOW);
      delay(100);
      pinMode(echoPin, INPUT);

      motor3.run(RELEASE);
      motor4.run(RELEASE);
  }else{
      motor3.run(FORWARD);
      motor4.run(FORWARD);
  }
}


