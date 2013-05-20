#include <BiColorLed.h>

// This code cycles a green/red bicolor LED thru 5 different colors
// Build the circuit indicated here: http://arduino.cc/playground/Code/BiColorLED

#define MAXLEVEL 5

// Instantiate a Bounce object with a 5 millisecond debounce time
BiColorLed led = BiColorLed(4, MAXLEVEL);
int level;
int delta;

void setup() {
  led.init();
  level = 0;
  delta = 1;
}

void loop() {
  led.setColor(level); // set color
  level += delta; // incr to next color
  if ((level == 0) || (level==MAXLEVEL-1)) delta = -delta; // if at limits, then reverse dir
  delay(1000);
}

