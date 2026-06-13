#include <TFT_22_ILI9225.h>

#define TFT_RST 9
#define TFT_RS 8
#define TFT_CS 10
#define TFT_LED 0

TFT_22_ILI9225 tft = TFT_22_ILI9225(TFT_RST, TFT_RS, TFT_CS, TFT_LED);

void setupFTF() {
  tft.begin();
  tft.clear();
}

void tekenGezicht(const uint16_t gezicht[][5]) {
  tft.fillRectangle(0, 0, 176, 220, COLOR_BLACK);  // zwarte achtergrond

  for (int i = 0; gezicht[i][2] != 0; i++) {  // stop als breedte 0 is
    uint16_t x = gezicht[i][0];
    uint16_t y = gezicht[i][1];
    uint16_t breed = gezicht[i][2];
    uint16_t hoog = gezicht[i][3];
    uint16_t kleur = gezicht[i][4];

    // fillRectangle wil twee hoekpunten: x,y en x+breed, y+hoog
    tft.fillRectangle(x, y, x + breed, y + hoog, kleur);
  }
}