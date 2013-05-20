#include <Arduino.h>

#include "BiColorLed.h"

float gBiColorLevels3[] = {0, 0.55, 1.0};
float gBiColorLevels5[] = {0, 0.35, 0.55, 0.8, 1.0};

BiColorLed::BiColorLed(int pinNum, int numLevels) : 
  mPinNum(pinNum), mNumLevels(numLevels)
{ 
}

void BiColorLed::init()
{
  pinMode(mPinNum, OUTPUT);
}

void BiColorLed::setColor(int level)
{
  if (level < 0) level = 0;
  if (level >= mNumLevels) level = mNumLevels-1;
  
  float decLevel = 0;
  if (mNumLevels == 3) decLevel = gBiColorLevels3[level];
  else if (mNumLevels == 5) decLevel = gBiColorLevels5[level];

  int brightness = 255*decLevel;
  analogWrite(mPinNum, brightness);     
}



