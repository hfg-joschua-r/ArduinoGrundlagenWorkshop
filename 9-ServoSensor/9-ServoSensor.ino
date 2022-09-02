#include <Servo.h>
#include <Ultrasonic.h>

Ultrasonic ultrasonic(12,11); // (Trig PIN,Echo PIN)


Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 
  pos = map(ultrasonic.Ranging(CM),1,50, 0, 180);
  myservo.write(pos);
  delay(500);
}
