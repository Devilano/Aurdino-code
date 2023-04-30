#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0);     // sets the servo position to 90 degrees
  delay(500);           // waits for 1 second
  myservo.write(90);    // sets the servo position to 180 degrees
  delay(500);           // waits for 1 second
  myservo.write(180);      // sets the servo position to 0 degrees
  delay(500);           // waits for 1 second
  myservo.write(270);     // sets the servo position back to 90 degrees
  delay(500);     
  myservo.write(360);     // sets the servo position back to 90 degrees
  delay(500);    // waits for 1 second
}
