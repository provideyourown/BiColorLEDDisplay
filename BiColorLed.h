#ifndef bicolorled_h
#define bicolorled_h


class BiColorLed {
protected:
  int mPinNum;
  int mNumLevels;

public:
  BiColorLed(int pinNum, int numLevels);
  void init(); // set pin mode
  void setColor(int level);
};

#endif // bicolorled_h
