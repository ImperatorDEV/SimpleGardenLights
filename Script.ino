#include <FastLED.h>

#define funpin  4 

#define photo   A0
#define ref     A1

#define red     A2
#define green   A3
#define blue    A4

#define ledqt   3
#define ledpin  3

int cl[3];
int colors[21] = {0xacf7f8, 0x3423cc, 0xbf7a05, 0xe375e7,
0x63ef93,0x01b32c, 0xd6a1e9, 0xadee8b, 0x5a635d, 0x1776d8,
0x185b02, 0x09502d,0xc89e2d, 0x878e7f, 0xa0c2a7, 0xb5ac33,
0x2059d6, 0x039451, 0x855f56, 0xfec102, 0x2baea2};
CRGB leds[ledqt];

void setup() {
  FastLED.addLeds<WS2812B, ledpin, GRB>(leds, ledqt);
  cl[0]=map(analogRead(red), 0, 1023, 0, 255);
  cl[1]=map(analogRead(green), 0, 1023, 0, 255);
  cl[2]=map(analogRead(blue), 0, 1023, 0, 255);
  pinMode(funpin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(funpin) == HIGH) {
    funmode();
  }
  if(analogRead(photo)>=analogRead(ref)) {
    ledcl(cl[0], cl[1], cl[2]);
  } else {
    ledcl(0,0,0);
  }
  delay(200);
}

int ledcl(int a,int b,int c){
  int i;
  for(i=0; i<ledqt;i++){
    leds[i].setRGB(a, b, c);
  }
  FastLED.show();
}

int funmode(){
  while(digitalRead(funpin) == HIGH){
    int i;
    for(i=0; i<ledqt;i++){
      leds[i]= colors[random(1, 20)];
      }
    FastLED.show();
    delay(200);
    }
  }

int renardmode(){
  
  
}

