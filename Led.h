//Comments from Degenknauf inserted in the
//frame of testing the work with git
/*********************************************
class Led {
  private:
  uint8_t _pin;

  public:
  Led(const uint8_t pin) {
      _pin =pin;
      pinMode(_pin, OUTPUT);
  }
  void on() {
    digitalWrite(_pin,HIGH);
  }
  void off() {
    digitalWrite(_pin,LOW);
  }
};
