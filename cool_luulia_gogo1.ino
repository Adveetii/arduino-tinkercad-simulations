// C++ code
//
int o_LEDPin = 9;
void setup()
{
  pinMode(o_LEDPin, OUTPUT);
}

void loop()
{
  digitalWrite(o_LEDPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(o_LEDPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}