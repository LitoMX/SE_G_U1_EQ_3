//Mismo funcionamiento del anterior código pero forma más pro de hacerlo
int leds[] = {10,11,12};
int  i;
int tiempoPrendido;
int tiempoApagado;
void setup() {
  tiempoPrendido = 1000;
  tiempoApagado = 500;
  for(i = 0; i<3; i++){
      pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  actionLED(1);
  delay(tiempoPrendido);
  actionLED(0);
  delay(tiempoApagado);

}

void actionLED(int v){
  for(i = 0; i<3; i++){
    digitalWrite(leds[i], v);
  }
}