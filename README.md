# NeoPixel Matrix Gradation Patterns with PIR Sensor

<div style="display:flex; gap:12px; align-items:flex-start;">
  <img src="https://github.com/easai/NeoPixel-Matrix----Gradation/blob/main/IMG_2700.jpeg" height="150">
  <img src="https://github.com/easai/NeoPixel-Matrix----Gradation/blob/main/IMG_2701.jpeg" height="150">
  <img src="https://github.com/easai/NeoPixel-Matrix----Gradation/blob/main/IMG_2703.jpeg" height="150">
</div>

![NeoPixel Matrix Demo](https://github.com/easai/NeoPixel-Matrix----Gradation/blob/main/NeoPixel%20Matrix%20--%20Gradation.gif)

This project showcases an Arduino script designed to control a NeoPixel matrix, creating gradation patterns in response to input from a Passive Infrared (PIR) sensor. The PIR sensor detects motion, triggering dynamic visual effects on the NeoPixel matrix.

## Features
- **Interactive Motion Detection**: Utilizes a PIR sensor to detect motion and activate the NeoPixel matrix.
- **Gradation Patterns**: Displays smooth and colorful gradation patterns that change based on the PIR sensor input.
- **Arduino Compatible**: Designed to work with Arduino boards. Tested on UNO R3 and Nano.

## Components
- **Arduino Board**: Any Arduino-compatible board (e.g., Arduino Uno, Nano).
- **NeoPixel Matrix**: A matrix of WS2812B LEDs (NeoPixels). 
- **PIR Sensor**: This is a passive infrared sensor for motion detection. I used a 10k ohm pull-down resistor for the Arduino UNO R3 board but not for the Nano board.
- **Power Supply**: Appropriate power supply for the NeoPixel matrix.

![NeoPixel Matrix Gradation Patterns with PIR Sensor schematic diagram](https://github.com/easai/NeoPixel-Matrix----Gradation/blob/main/schematics.png)

## Usage
- **Adafruit NeoMatrix**: This program uses Adafruit NeoMatrix and dependent libraries.
- **Connect the Components**: Follow the wiring diagram provided in the repository to connect the NeoPixel matrix and PIR sensor to the Arduino board.
- **Power Up**: Ensure the power supply is connected and turn on the system. Allow the PIR sensor to stabilize before use.
- **Enjoy the Show**: Watch as the NeoPixel matrix displays stunning gradation patterns in response to motion detected by the PIR sensor.

