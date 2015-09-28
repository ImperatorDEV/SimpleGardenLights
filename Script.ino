#include <FastLED.h>

#define photo   A0
#define ref     A1

#define rot     A2
#define grun    A3
#define blau    A4

#define ledqt   6
#define ledpin  3

int cl[3];
CRGB leds[ledqt];

void setup() {
  FastLED.addLeds<WS2812B, ledpin, RGB>(leds, ledqt);
  cl[0]=map(analogRead(rot), 0, 1023, 0, 255);
  cl[1]=map(analogRead(grun), 0, 1023, 0, 255);
  cl[2]=map(analogRead(blau), 0, 1023, 0, 255);
}

void loop() {
  if(analogRead(photo)<=analogRead(ref)) {
    int i;
    for(i=0; i<ledqt;i++){
      leds[i].setRGB(cl[0], cl[1], cl[2]);
    }
    FastLED.show();
  } else {
    int i;
    for(i=0; i<ledqt;i++){
      leds[i].setRGB(0, 0, 0);
    }
    FastLED.show();
  }
  delay(200);
}
