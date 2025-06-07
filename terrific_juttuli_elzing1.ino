// C++ code
//
int timer = 200;

void setup()
{
  for (int pin = 11; pin < 14; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  for (int pin = 11; pin < 14; pin++) {
    digitalWrite(pin, HIGH);
    delay(timer);
    digitalWrite(pin, LOW);
  }

  for (int pin = 13; pin >= 11; pin--) {
    digitalWrite(pin, HIGH);
    delay(timer);
    digitalWrite(pin, LOW);
  }
}
