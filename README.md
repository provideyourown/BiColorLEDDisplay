# BiColorLedDisplay Library

> &copy; 2012-2013 Scott Daniels <provideyourown.com>
> under GNU General Public License

The BiColorLedDisplay Library provides two classes. The first class BiColorLed will display a numeric level by color modulating a red-green LED using PWM. The second class BiColorLedDisplay will display a two-digit numeric value by using two LEDs.

## Usage example

    LED1 = 8;
    LED2 = 9;

    BiColorLedDisplay display(LED1, LED2, 25);

    void setup()
    {
      display.init();
    }

    void loop()
    {
      int val = analogRead(somePin);
      int level = map(val, 0, 1023, 0, 25);
      display.setColorLevel(val);
    }


