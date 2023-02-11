codificador
---------------------------------------------

int leds[] = { 3, 4, 5, 6 };
int pot = A0;
int valor = 0;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  for (i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot);
  valor = map(valor, 0, 1023, 0, 9);
  Serial.println(String(valor) + " valor");


  codif(valor);
}

void codif(int v) {
  apagarLeds();
  if (v == 8) {
    digitalWrite(leds[3], 1);
  } else if (v == 7) {
    digitalWrite(leds[2], 1);
  } else if (v == 6) {
    digitalWrite(leds[3], 1);    
    digitalWrite(leds[2], 1);
  } else if (v == 5) {
    digitalWrite(leds[1], 1);
  } else if (v == 4) {
    digitalWrite(leds[3], 1);
    digitalWrite(leds[1], 1);
  } else if (v == 3) {
    digitalWrite(leds[2], 1);
    digitalWrite(leds[1], 1);
  } else if (v == 2) {
    digitalWrite(leds[3], 1);
    digitalWrite(leds[2], 1);
    digitalWrite(leds[1], 1);
  } else if (v == 1) {
    digitalWrite(leds[0], 1);
  } else if (v == 0) {
    digitalWrite(leds[3], 1);
    digitalWrite(leds[0], 1);
  }
  delay(300);
}

void apagarLeds() {
  for (i = 0; i < 4; i++) {
    digitalWrite(leds[i], 0);
  }
}