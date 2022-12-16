#include "biblioteka.h"

int uspori = 0;

void setup() {
  postaviEkran();
  gore();   desno();
  gore();   desno();
  gore();   desno();
  gore();   desno();
  dolje();  desno();
  dolje();  desno();
  dolje();  desno();
  dolje();  lijevo();
  lijevo(); lijevo();
  lijevo(); lijevo();
  lijevo(); lijevo();
}

void loop() {
  gore();
  gore();
  gore();
  
  desno();

  dolje();

  lijevo();
  lijevo();

  delay(uspori);
}

void oldloop() {

  boja = boja + 4096;
  display.fillScreen(boja);
  for (int n = 0; n <= 10; n++) {
    boja = boja + 4096;
    display.fillScreen(boja);
  }
  boja = 0;
  for (int n = 0; n <= 10; n++) {
    boja = boja + 1;
    display.fillScreen(boja);
  }
  //delay(300);
}
