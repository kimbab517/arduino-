#include <Servo.h>
int servo_pin = 7 ;
int potpin = 1;  // analog pin used to connect the potentiometer
int val;

Servo servoMain;

void setup() {
  // put your setup code here, to run once:
  servoMain.attach(servo_pin);

 



}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);
  servoMain.write(val);                  // sets the servo position according to the scaled value
  delay(15);


}
