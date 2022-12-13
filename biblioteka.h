#include "Adafruit_ILI9341.h"
#include "Adafruit_GFX.h"
#include <SPI.h>

#define TFT_CS   5
#define TFT_DC  21

Adafruit_ILI9341 display = Adafruit_ILI9341(TFT_CS, TFT_DC);

int x = 320 / 2;
int y = 240 / 2;
int boja = 0;
int korak = 10;

void postaviEkran() {
  display.begin();
  display.fillScreen(boja);
  display.setRotation(3);
  display.setTextColor(boja, ILI9341_BLACK);
  display.setTextSize(1);
}

int provjera() {
  if ( x <   0 ) {
    x = 320;
  }
  if ( y <   0 ) {
    y = 240;
  }
  if ( x > 320 ) {
    x =   0;
  }
  if ( y > 240 ) {
    y =   0;
  }
}
  
int crtaj() {
  provjera();
  display.setTextColor(boja++, ILI9341_BLACK);
  display.setCursor(x, y);
  display.print("0");
}

int gore() {
  y = y - korak;
  crtaj();
}

int dolje() {
  y = y + korak;
  crtaj();
}

int lijevo() {
  x = x - korak;
  crtaj();
}

int desno() {
  x = x + korak;
  crtaj();
}
