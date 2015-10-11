# SimpleGardenLights
A WS2812b driver script for Gardenlights with lightswitch. Renard support might be added for those loving chrismas lights.
With this simple script you can turn your Arduino into a powerful light controller

Use usage of this Script is quit simple:
The program is totally configurble without having to upload a new firmware ever after the first Upload.
All parameters are chanegable via Trimmers on the AnalogPINS A1-4 and Switches on Digitalpins 4-5
#Configuration:<br>
  #define funpin  4   //PIN for FUN-MODE<br>
  #define photo   A0  //photoresistor PIN Wiring: 5V--resistor--A0--photoresistor---GND<br>
  #define ref     A1  //Trimmer for lightsensor<br>
  #define rot     A2  //Red(german: ROT) Trimmer for the red part of the led<br>
  #define grun    A3  //Green(german: GRÜN) Trimmer for the green part of the led<br>
  #define blau    A4  //Blue(german: ROT) Trimmer for the Blue part of the led<br>
  #define ledqt   3   //Quantity of LEDS<br>
  #define ledpin  3   //PIN to wich the data-line of the leds is hooked-up<br>
