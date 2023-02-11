int potenciometro = A0;
  //PIN analógico usa hexadecimal
  // analogico -> A0 - A5
void setup() {
  //Los pines analogicos, solo funcionan como entradas, por lo que no se requiere se defina el modo de trabajo
  //ADC = // 5 VOLS de voltaje de referencia // 10 bits de resolucion --> 1024 valores = (0, 1023)
  //0 = 0 volts
  //1023 = 5 volts

  Serial.begin(9600);
}

int valor;
void loop() {
  valor = analogRead(potenciometro);
  valor = map(valor,0, 1023, 0, 4);
  Serial.println("Valor leído: " + String(valor));
  delay(250);//ms
}
