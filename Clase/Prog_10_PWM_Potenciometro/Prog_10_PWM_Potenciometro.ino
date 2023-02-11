int led = 6; //pin compatible con PWM
int pot = A0;
void setup() {
  //Los pines PWM no se les establece modo de trabajo

}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot); // 0 - 1023
  //opcion 1...map

  //opcion 2...logica
  valor = valor/4;
  analogWrite(led, valor); //0 - 255

}
