#ifndef bicolorleddisplay_h
#define bicolorleddisplay_h


class BiColorLed;


class BiColorLedDisplay {
protected:
  BiColorLed* mLedA;
  BiColorLed* mLedB;
  int mPinBOn;

public:
  BiColorLedDisplay(int pinA, int pinB, int numLevels, int pinBOn = -1);

  void init();
  void setColorA(int level);
  void setColorB(int level);
  void setColorLevel(int level);
  void turnLedBOn(int on);
};

#endif // bicolorleddisplay_h
