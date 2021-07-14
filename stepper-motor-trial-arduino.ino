#include <Stepper.h>
const int stepsperRev = 200;
Stepper StepUp (stepsperRev, 8, 9, 10, 11);

void setup() {
  // put your setup code here, to run once:
  StepUp.setSpeed(5);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("clockwise");
  StepUp.step(stepsperRev);
  delay(500);

  Serial.println("anti-clockwise");
  StepUp.step(-stepsperRev);
  delay(500);
}
