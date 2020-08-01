#define mot1 11
#define mot2 10

void setup()
{
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  analogWrite(mot1, 0);
  analogWrite(mot2, 0);
}

void loop()
{
  analogWrite(mot1, 255);
  delay(2000);
  analogWrite(mot1, 0);
  delay(1000);
  analogWrite(mot2, 255);
  delay(2000);
  analogWrite(mot2, 0);
  delay(1000);
}