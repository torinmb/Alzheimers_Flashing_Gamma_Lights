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

#define hz  10

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

unsigned long count;

void setup() {
  //Serial.begin(115200);
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
  pixels.begin(); // This initializes the NeoPixel library.
  // to flash at 40hz / 40 times per second the strip needs to repeatedly turn on for 12.5ms and off for 12.5ms.
  // After recording a slow motion video there is a lag when updating the LEDs and using a delay of 10ms ultimatley flashed the LEDs at 40hz 
  //  hz = (1000.0 / (hz * 2.0)); 
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
  delay(hz);
}
