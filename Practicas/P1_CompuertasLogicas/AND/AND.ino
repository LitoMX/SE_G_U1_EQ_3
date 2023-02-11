int led = 3;
int pot[] = { A0, A1 };
int valor[] = { 0, 0 };


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
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
  delay(300);
  puertaAND(valor);
}

void puertaAND(int *v) {

  if (v[0] == 0) {
    if (v[1] == 0 || v[1] == 1) {
      digitalWrite(led, 0);
    } else {
      digitalWrite(led, 0);
    }
  } else {
    if (v[1] == 0) {
      digitalWrite(led, 0);
    } else {
      digitalWrite(led, 1);
    }
  }
}