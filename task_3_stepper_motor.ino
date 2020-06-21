
#include <Stepper.h>

const int stepsPerRevolution = 200;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 15;  // 

void setup() {
}

void loop() {
  
  int sensorReading = analogRead(A0);
  
  int motorSpeed = map(sensorReading, 12, 1023, 0, 100);
 
  if (motorSpeed > 15) {
    myStepper.setSpeed(motorSpeed);
    
    myStepper.step(stepsPerRevolution / 100);
  }
}
