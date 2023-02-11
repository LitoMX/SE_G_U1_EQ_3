//Sumador Completo

int led[] = { 4, 3};
int pot[] = { A0, A1, A2 };
int valor[] = { 0, 0, 0 };

void setup() {
  // put your setup code here, to run once:
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  Serial.begin(9600);
}
int i;
void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i < 3; i++) {
    valor[i] = analogRead(pot[i]);
    valor[i] = map(valor[i], 0, 1023, 0, 1);
    Serial.println(String(valor[i])+" -- "+String(valor[i]+1));
  }
  sumador(valor);
  delay(300);
}

void sumador(int *v) {

  if (v[0] == 0 && v[1] == 0) {
    if (v[2] == 0) {
      digitalWrite(led[0], 0);
      digitalWrite(led[1], 0);
    } else if (v[2] == 1) {
      digitalWrite(led[0], 0);
      digitalWrite(led[1], 255);
    }
  } else if (v[0] == 0 && v[1] == 1) {
    if (v[2] == 0) {
      digitalWrite(led[0], 0);
      digitalWrite(led[1], 255);
    } else if (v[2] == 1) {
      digitalWrite(led[0], 255);
      digitalWrite(led[1], 0);
    }
  } else if (v[0] == 1 && v[1] == 0) {
    if (v[2] == 0) {
      digitalWrite(led[0], 0);
      digitalWrite(led[1], 255);
    } else if (v[2] == 1) {
      digitalWrite(led[0], 255);
      digitalWrite(led[1], 0);
    }
  } else if (v[0] == 1 && v[1] == 1) {
    if (v[2] == 0) {
      digitalWrite(led[0], 255);
      digitalWrite(led[1], 0);
    } else if (v[2] == 1) {
      digitalWrite(led[0], 255);
      digitalWrite(led[1], 255);
    }
  }
}