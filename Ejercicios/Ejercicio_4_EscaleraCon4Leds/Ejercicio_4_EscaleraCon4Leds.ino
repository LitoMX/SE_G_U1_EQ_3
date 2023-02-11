//Escalera con 4 Leds

int leds[]= {3,4,5,6};
int pot = A1;
int valor;
int i;


void setup() {
  // put your setup code here, to run once:
  for (i = 0; i < 3; i++) {
    pinMode(leds[1], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot);
  Serial.println("Valor Leido: " + String(valor));
  encenderLeds(valor);
}

void encenderLeds(int v){
  if(v < 100){
    for(i=0;i<4;i++){
      digitalWrite(leds[i],0);
    }
  }
  else if(v<331){
    analogWrite(leds[0], 255);
    digitalWrite(leds[1], 0);
  }
  else if(v<562){
    analogWrite(leds[0], 255);
    digitalWrite(leds[1],255);
    analogWrite(leds[2], 0);
  }
  else if (v<793){
    analogWrite(leds[0], 255);
    digitalWrite(leds[1], 255);
    analogWrite(leds[2], 255);
    analogWrite(leds[3], 0);
  }
  else if(v<1024){
    analogWrite(leds[0], 255);
    digitalWrite(leds[1], 255);
    analogWrite(leds[2], 255);
    analogWrite(leds[3], 255);
  }
}