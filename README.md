Arduino + LED strip flashing at 40hz for Alzheimers

Inspired by the Radio Lab podcast http://www.radiolab.org/story/bringing-gamma-back/ showcasing the MIT research that reduced beta amyloid proteins in the hippocampus by 50% when mice with early stages of Alzheimer’s were exposed to flickering light at 40hz for an hour.

After recording a slow-motion video at 240fps it turned out there was a delay when using the LED strip, so instead of turning the LED strip on every 12.5ms and off 12.5 ms the interval was adjusted to turn on and off every 10ms, which resulted in the lights flashing 40 times per second / at 40hz. Here is a video of it currently working: https://www.dropbox.com/s/yunfq8pdprz46qs/40hz%20With%2010ms%20Arduino%20Delay.mp4?dl=0


Warning: This will strobe the LED strip, so do not use it around individuals with epilepsy. 
The research was only tested on mice and has not been proven to work on humans.

# Parts
Arduino Uno: $24.95
https://www.adafruit.com/products/50?gclid=CjwKEAiA4dPCBRCM4dqhlv2R1R8SJABom9pHH-xCTzKD9I5WMDmjhv4XvHnBhavM0pzaVjDP1QEMUxoCwyTw_wcB

Adafruit NeoPixel Digital RGB LED Strip - White 60 LED: $24.95
https://www.adafruit.com/products/1138?gclid=CjwKEAiA4dPCBRCM4dqhlv2R1R8SJABom9pHnoW_rBo-baImYlb7MwPGUMsK0nUbw77FqXv4S-zN9xoCYFnw_wcB

Total Cost:
$49.9

This project is also possible to accomplish with a standard RGB LED strip instead of an addressable LED strip.
# Instructions
Download and install the Adafruit NeoPixel library and install it by unziping the folder, renaming it to Adafruit_NeoPixel adding it to the Arduino library folder. On Mac it is located under ~/Documents/Arduino/library. If there is no library folder you can create one. https://github.com/adafruit/Adafruit_NeoPixel

Attach the LED strip to the Arduino. Attach the middle pin of the LED strip to pin 6 on the Arduino. Upload the Flashing_Gamma_Lights.ino to the arduino.
