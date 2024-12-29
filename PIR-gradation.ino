#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include <avr/sleep.h>

const int PIN_PIR_SIG = 2;
const int PIN_LED = 10;

#define NUMPIXELS 64
#define PIN 6
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_PIR_SIG, INPUT);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  digitalWrite(PIN_LED, LOW);
  clearScreen();
  attachInterrupt(digitalPinToInterrupt(PIN_PIR_SIG), showPatterns, RISING);
}

// Function to create a gradation effect on the NeoPixel strip
void gradation() {
  int rndRedValue = random(1, 3);
  int rndGreenValue = random(1, 3);
  int rndBlueValue = random(1, 3);
  for (int i = 0; i < NUMPIXELS; i++) {
    int rndValue = random(3, 15);
    pixels.setPixelColor(i, pixels.Color(rndValue / rndRedValue, rndValue / rndGreenValue, rndValue / rndBlueValue));
    pixels.show();
  }
}

// Interrupt service routine
void showPatterns() {
  delay(50);
  for (int i = 0; i < 5; i++) {
    gradation();
    delay(1000);
  }
  clearScreen();
  sleep_mode();
}

// Function to clear the NeoPixel strip
void clearScreen() {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
    pixels.show();
  }
}

void loop() {
}
