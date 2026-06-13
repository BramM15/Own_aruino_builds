#include <TFT_22_ILI9225.h>

const uint16_t robotGezicht[][5] = {
  // Rechteroog (was linkeroog) — nu onderaan
  {101, 100, 40, 50, COLOR_WHITE},
  // Pupil
  {111, 110, 15, 20, COLOR_BLACK},

  // Linkeroog (was rechteroog)
  { 35, 100, 40, 50, COLOR_WHITE},
  // Pupil
  { 45, 110, 15, 20, COLOR_BLACK},

  // Mondje — nu bovenaan
  { 55,  47, 66, 18, COLOR_WHITE},

  {0, 0, 0, 0, 0}   // stop
};

// Kijkt naar LINKSBOVEN
const uint16_t kijkLinksBoven[][5] = {
  {101, 100, 40, 50, COLOR_WHITE},   // rechteroog
  {103, 102, 15, 20, COLOR_BLACK},   // pupil: links + boven
  { 35, 100, 40, 50, COLOR_WHITE},   // linkeroog
  { 37, 102, 15, 20, COLOR_BLACK},   // pupil: links + boven
  { 55,  47, 66, 18, COLOR_WHITE},   // mondje
  {0, 0, 0, 0, 0}
};

// Kijkt naar RECHTSBOVEN
const uint16_t kijkRechtsBoven[][5] = {
  {101, 100, 40, 50, COLOR_WHITE},
  {119, 102, 15, 20, COLOR_BLACK},   // pupil: rechts + boven
  { 35, 100, 40, 50, COLOR_WHITE},
  { 53, 102, 15, 20, COLOR_BLACK},   // pupil: rechts + boven
  { 55,  47, 66, 18, COLOR_WHITE},
  {0, 0, 0, 0, 0}
};

// Kijkt naar LINKSONDER
const uint16_t kijkLinksOnder[][5] = {
  {101, 100, 40, 50, COLOR_WHITE},
  {103, 128, 15, 20, COLOR_BLACK},   // pupil: links + onder
  { 35, 100, 40, 50, COLOR_WHITE},
  { 37, 128, 15, 20, COLOR_BLACK},   // pupil: links + onder
  { 55,  47, 66, 18, COLOR_WHITE},
  {0, 0, 0, 0, 0}
};

// Kijkt naar RECHTSONDER
const uint16_t kijkRechtsOnder[][5] = {
  {101, 100, 40, 50, COLOR_WHITE},
  {119, 128, 15, 20, COLOR_BLACK},   // pupil: rechts + onder
  { 35, 100, 40, 50, COLOR_WHITE},
  { 53, 128, 15, 20, COLOR_BLACK},   // pupil: rechts + onder
  { 55,  47, 66, 18, COLOR_WHITE},
  {0, 0, 0, 0, 0}
};