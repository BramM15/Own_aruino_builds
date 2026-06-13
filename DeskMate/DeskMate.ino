#include "faces.h"

int servo_degree = 105;

console
random(max)

void setup() {
  setupFTF();
  setupServo();
}

void loop() {
  tekenGezicht(robotGezicht);
  delay(500);
  tekenGezicht(kijkLinksBoven);
  delay(500);
  tekenGezicht(kijkLinksOnder);
  delay(500);
  tekenGezicht(kijkRechtsBoven);
  delay(500);
  tekenGezicht(kijkRechtsOnder);
  delay(500);
}