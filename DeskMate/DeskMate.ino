#include "faces.h"

int servo_degree;

const uint16_t (*gezichten[])[5] = {
  robotGezicht,
  kijkLinksBoven,
  kijkLinksOnder,
  kijkRechtsBoven,
  kijkRechtsOnder,
  blij,
  knipoog,
  verbaasd,
  slaperig
};
const int AANTAL_GEZICHTEN = 9;

const int RECHT_GRADEN = 105;  // schermpje rechtop
const int OMVAL_LINKS = 30;    // omgevallen naar links
const int OMVAL_RECHTS = 180;  // omgevallen naar rechts

void setup() {
  randomSeed(analogRead(0));
  setupFTF();
  setupServo();
}

void loop() {
  const uint16_t(*gekozen)[5] = gezichten[random(AANTAL_GEZICHTEN)];

  tekenGezicht(gekozen);

  int omvalDoel = (random(2) == 0) ? OMVAL_LINKS : OMVAL_RECHTS;

  if (gekozen == slaperig) {
    beweegNaar(omvalDoel, 40);  // langzaam omvallen
  } else if (gekozen == verbaasd) {
    setDegreeSnel(omvalDoel);  // ineens omvallen
  } else if (gekozen == blij) {
    for (int i = 0; i < 6; i++) {  // blijft springen tussen 85 en 125
      setDegreeSnel(85);
    }
  } else {
    setDegree(RECHT_GRADEN);  // normale gezichten: recht staan
  }

  delay(random(2000, 4001));
}
