const int led = 2;
const int botao = 4;
int botaoEstado = 0 ;

void setup ()
{
  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);
}

void loop ()
{
  botaoEstado = digitalRead(botao);
  if (botaoEstado == HIGH) {
  digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}

