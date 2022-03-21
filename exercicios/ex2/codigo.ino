const int ledverde = 4;
const int ledazul= 7;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  
  
}
