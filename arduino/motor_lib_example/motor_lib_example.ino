#include <AFMotor.h>
AF_DCMotor motor3(3, MOTOR12_64KHZ);
AF_DCMotor motor4(1, MOTOR12_64KHZ);

#include <NewPing.h>

#define max_cm_distance 40

int trigPin = 14;
int echoPin = 15;

long distance_cm;

NewPing sonar(trigPin, echoPin, max_cm_distance);

void setup(){
  motor3.setSpeed(500);
  motor4.setSpeed(500);
}

void reset_ultrasound(int echoPin){
  delay(100);
  pinMode(echoPin, OUTPUT);
  digitalWrite(echoPin, LOW);
  delay(100);
  pinMode(echoPin, INPUT);
}

void loop(){
  delay(1000);

  /* Send trigger wave to measure distance */
  distance_cm = sonar.ping_cm();

  /* Ultrasound stuck or obstacle beyound distance threshold */
  if ( distance_cm == 0 ) {
    
      /* Reset ultrasound to make sure it's not stuck */
      reset_ultrasound(echoPin);      

      /* Stop motor */
      motor3.run(RELEASE);
      motor4.run(RELEASE);
  
  }else{

      /* Set motor to forward mode */
      motor3.run(FORWARD);
      motor4.run(FORWARD);
  }
}


