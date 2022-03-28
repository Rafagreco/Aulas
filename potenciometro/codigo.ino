const int pot = 0;
const int led = 3;

void setup ()
{
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

int var;
int var2;

void loop()
{
  var = analogRead(pot);
  Serial.println(var);
  var2 = map(var,0,1023,0,255);
  analogWrite(led,var2);
  Serial.print("pot: ");
  Serial.println(var);
  Serial.print("map: ");
  Serial.println(var2);
  delay(100);
}
