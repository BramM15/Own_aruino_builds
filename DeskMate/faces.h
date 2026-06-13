#pragma once
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

// Blij — lachende streepjesogen (^ ^) met grote glimlach
const uint16_t blij[][5] = {
  { 35, 118, 40, 10, COLOR_WHITE},   // linkeroog dichtgeknepen
  {101, 118, 40, 10, COLOR_WHITE},   // rechteroog dichtgeknepen
  { 50,  42, 76, 24, COLOR_WHITE},   // brede glimlach
  {0, 0, 0, 0, 0}
};

// Knipoog — links open, rechts dicht
const uint16_t knipoog[][5] = {
  { 35, 100, 40, 50, COLOR_WHITE},   // linkeroog open
  { 45, 110, 15, 20, COLOR_BLACK},   // pupil
  {101, 120, 40,  8, COLOR_WHITE},   // rechteroog dicht (streepje)
  { 55,  47, 66, 18, COLOR_WHITE},   // mondje
  {0, 0, 0, 0, 0}
};

// Verbaasd — grote ogen, klein rond mondje (O)
const uint16_t verbaasd[][5] = {
  { 30,  92, 50, 62, COLOR_WHITE},   // groot linkeroog
  { 45, 110, 18, 24, COLOR_BLACK},   // pupil
  { 96,  92, 50, 62, COLOR_WHITE},   // groot rechteroog
  {111, 110, 18, 24, COLOR_BLACK},   // pupil
  { 73,  44, 30, 30, COLOR_WHITE},   // O-mondje
  {0, 0, 0, 0, 0}
};

// Slaperig — half dichte ogen, klein mondje
const uint16_t slaperig[][5] = {
  { 35, 130, 40, 20, COLOR_WHITE},   // linkeroog half
  { 45, 134, 15, 12, COLOR_BLACK},   // pupil
  {101, 130, 40, 20, COLOR_WHITE},   // rechteroog half
  {111, 134, 15, 12, COLOR_BLACK},   // pupil
  { 60,  52, 56, 10, COLOR_WHITE},   // klein mondje
  {0, 0, 0, 0, 0}
};