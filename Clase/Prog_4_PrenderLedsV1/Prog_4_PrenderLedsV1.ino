int led = 10;
int led2 = 11;
int led3 = 12;

void setup() {
  //Debe establecerse el modod de trabajo de un pin digital, qa sea este de entrada o salida
  pinMode(led1,OUTPUT);
  pinMode(le2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  //digitalWrite(led, HIGH); //PRENDER LED
  //digitalWrite(led, true); //PRENDER LED
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);


  //Con el delay le damos tiempo al LED para encenderse y apagarse 
  delay(1000);

  //digitalWrite(led, LOW); //APAGAR LED
  //digitalWrite(led, false); //APAGAR LED 
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

}

