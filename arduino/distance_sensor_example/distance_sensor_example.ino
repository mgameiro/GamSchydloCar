#include <NewPing.h>

#define max_cm_distance 40

int trigPin = 8;
int echoPin = 9;

long distanz;
long distanz_cm;

NewPing sonar(trigPin, echoPin, max_cm_distance);
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
 
  distanz_cm = sonar.ping_cm();
 
  if ( distanz_cm == 0 ) {
      delay(100);
      pinMode(echoPin, OUTPUT);
      digitalWrite(echoPin, LOW);
      delay(100);
      pinMode(echoPin, INPUT);
  }else{
      Serial.print("Ping: ");
      Serial.print(distanz_cm);
      Serial.println("cm");
  }
}
