// based on: Blocking example by Mike McCauley (mikem@airspayce.com)
// Shows how to use the blocking call runToNewPosition
// Which sets a new target position and then waits until the stepper has 
// achieved it.
#include <AccelStepper.h>

int DIR_PIN = 2;
int STEP_PIN = 3;
int EN_PIN = 4;

AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

void setup() {
  // Enable the stepper driver
  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, LOW);
  // Set initial speed & acceleration
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(500);
}

void loop() {
  stepper.runToNewPosition(200);
  delay(1000);
  stepper.runToNewPosition(0);
  delay(1000);
}
