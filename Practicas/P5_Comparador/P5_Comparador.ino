int led[] = { 5, 4, 3 };
int pot[] = { A0, A1 };
int valor[] = { 0, 0 };

void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < 4; i++)
{
  pinMode(led[i], OUTPUT);
}
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor[0] = analogRead(pot[0]);
  valor[1] = analogRead(pot[1]);
  valor[0] = map(valor[0], 0, 1023, 0, 1);
  valor[1] = map(valor[1], 0, 1023, 0, 1);
  Serial.println(String(valor[0]) + " uno");
  Serial.println(String(valor[1]) + " dos");
  COMPARADOR(valor);
}

void COMPARADOR(int *v) {

  if (v[0] == v[1]) {
    digitalWrite(led[0], 1);
    digitalWrite(led[1], 0);
    digitalWrite(led[2], 0);
  } 
  else {
    digitalWrite(led[0], 0);
    if (v[0] < v[1]) {
        digitalWrite(led[1], 0);
        digitalWrite(led[2], 1);
      } 
    else {
      digitalWrite(led[1], 1);
      digitalWrite(led[2], 0);
    }
  }
  delay(300);
}