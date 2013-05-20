#include <BiColorLedDisplay.h>

// This code cycles a green/red bicolor LED thru 5 different colors
// Build the circuit indicated here: http://arduino.cc/playground/Code/BiColorLED

#define MAXLEVEL 15

// Instantiate a Bounce object with a 5 millisecond debounce time
BiColorLedDisplay leds = BiColorLedDisplay(4, 5, 15, 7);
int level;
int delta;

void setup() {
  leds.init();
  // on by default - leds.turnLedBOn(1);
  level = 0;
  delta = 1;
}

void loop() {
  leds.setColorLevel(level); // set color
  //leds.setColorA(level);
  //leds.setColorB(level);
  level += delta; // incr to next color
  if ((level == 0) || (level==MAXLEVEL-1)) delta = -delta; // if at limits, then reverse dir
  delay(500);
}

