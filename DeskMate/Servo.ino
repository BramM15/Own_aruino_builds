#include <Servo.h>

#define SERVO_PIN 6

Servo Servo;

void setupServo() {
  Servo.attach(SERVO_PIN);   // servo op pin 6
  servo_degree = 105;
  Servo.write(105);
}

// Beweeg vloeiend naar een hoek; grotere vertraging = langzamer
void beweegNaar(int degree, int stapVertraging) {
  int stap = (degree > servo_degree) ? 1 : -1;
  while (servo_degree != degree) {
    servo_degree += stap;
    Servo.write(servo_degree);
    delay(stapVertraging);
  }
}

// Normale vloeiende beweging
void setDegree(int degree) {
  beweegNaar(degree, 15);
}

// Ineens naar een hoek springen (geen tussenstapjes)
void setDegreeSnel(int degree) {
  servo_degree = degree;
  Servo.write(degree);
}