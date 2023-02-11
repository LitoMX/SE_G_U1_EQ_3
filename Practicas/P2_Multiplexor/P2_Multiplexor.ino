multiplexor
-------------------------------------

int led = 3;
int pot[] = { A0, A1, A2 };
int valor[] = { 0, 0, 0 };
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i < 3; i++) {
    valor[i] = analogRead(pot[i]);
    valor[i] = map(valor[i], 0, 1023, 0, 1);
    Serial.println(String(valor[i]) + " " + (i + 1));
  }

  mul(valor);
}

void mul(int *v) {
  digitalWrite(led,0);
  if (v[0] == 0) {
    digitalWrite(led, v[1]);
  } else if (v[0] == 1) {
    digitalWrite(led, v[2]);
  }
  delay(300);
}