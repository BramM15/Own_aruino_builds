#include <Servo.h>

#define SERVO_PIN 6

Servo Servo;

void setupServo() {
  Servo.attach(SERVO_PIN);   // servo op pin 6
  Servo.write(105);
}

void setDegree() {

}

void getDegree() {
  
}