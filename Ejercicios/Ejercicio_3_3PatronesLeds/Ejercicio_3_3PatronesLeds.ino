//3 Patrones de encender LEDS

int leds[] = {4,5,6,7,8,9,10,11};
int potenciometro =A0;
int i;
int valor;
int tiempoPrendido;
int tiempoApagado;

void setup() {
  // put your setup code here, to run once:
  tiempoPrendido = 1000;
  tiempoApagado = 500;

  for (i = 0; i < 3; i++) {
    pinMode(leds[1], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);
  valor = map(valor, 0, 1023, 0, 3);
  Serial.println("Valor Leido: " + String(valor));
  modoEncender(valor);
  }

void modoEncender(int m) {
  if (m == 0) {
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 1);
    }
    delay(tiempoPrendido);
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 0);
    }
    delay(tiempoApagado);

  } else if(m==1) {
    int led = random(0,8);
    digitalWrite(leds[led], 1);
    delay(tiempoPrendido);
    digitalWrite(leds[led], 0);
    delay(tiempoApagado);
  }else if(m==2){
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 1);
      delay(250);
    }
    delay(tiempoPrendido);
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 0);
      delay(250);
    }
    delay(tiempoApagado);
  }
  else{
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 1);
      if (i%2==1){
        delay(500);
        }
    }
    delay(tiempoPrendido);
    for (i = 0; i < 8; i++) {
      digitalWrite(leds[i], 0);
      if (i%2==1){
        delay(500);
        }
    }
    delay(tiempoApagado);

  }
}