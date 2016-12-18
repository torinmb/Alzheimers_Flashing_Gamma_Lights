// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      60

float hz = 40.0

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

unsigned long count;

void setup() {
  Serial.begin(115200);
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {
  count = count + 1;
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    if (count %2 == 0) {
      pixels.setPixelColor(i, pixels.Color(255,255,255)); // Moderately bright green color.
    } else {
      pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.
    }
  }
  pixels.show(); // This sends the updated pixel color to the hardware.
  delay(1000/(2.0 * hz)); // 40ms on, 40ms off so the light turns on a total of 40 times in a secon
}
