#include <Arduino.h>

#include "BiColorLed.h"
#include "BiColorLedDisplay.h"



BiColorLedDisplay::BiColorLedDisplay(int pinA, int pinB, int numLevels, int pinBOn) : mPinBOn(pinBOn)
{
  if (numLevels == 15)
  {
    mLedA = new BiColorLed(pinA, 3);
    mLedB = new BiColorLed(pinB, 5);
  }
  else
  {
    mLedA = new BiColorLed(pinA, 5);
    mLedB = new BiColorLed(pinB, 5);
  }
}

void BiColorLedDisplay::init()
{
  mLedA->init();
  mLedB->init();
  if (mPinBOn >= 0) {
    pinMode(mPinBOn, OUTPUT);
    digitalWrite(mPinBOn, 1);
  }
}

void BiColorLedDisplay::setColorA(int level)
{
  mLedA->setColor(level);
}

void BiColorLedDisplay::setColorB(int level)
{
  mLedB->setColor(level);
}

void BiColorLedDisplay::setColorLevel(int level)
{
  int aVal = level / 5;
  int bVal = level % 5;
  setColorA(aVal);
  setColorB(bVal);
}

void BiColorLedDisplay::turnLedBOn(int on)
{
  if (mPinBOn >= 0)
    digitalWrite(mPinBOn, on);
}


