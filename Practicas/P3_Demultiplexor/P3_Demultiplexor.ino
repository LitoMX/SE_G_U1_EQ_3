demultiplexor
----------------------------------------------------
int leds[] = {3,4,5,6};
int pot[] = { A0, A1, A2 };
int valor[] = { 0, 0, 0, 0 };
int i=0;

void setup() {
  // put your setup code here, to run once:
for(i=0;i<4;i++){
    pinMode(leds[i],OUTPUT);
}
Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<3;i++){
    valor[i] = analogRead(pot[i]);
    valor[i] = map(valor[i], 0, 1023, 0, 1);
    Serial.println(String(valor[i]) + " "+ (i+1));
  }
  
  demul(valor);
}

void demul(int *v) {
apagarLeds();
if (v[0]==1){

  if (v[1] == 0) {
    if (v[2] == 0) {
      digitalWrite(leds[0], 1);
    } else if(v[2]==1) {
      digitalWrite(leds[1], 1);
    }
  } else if(v[1]==1) {
    if (v[2] == 0) {
      digitalWrite(leds[2], 1);
    } else if(v[2] == 1){
      digitalWrite(leds[3], 1);
    }
  }
}
delay(300);
}

void apagarLeds(){
  for (i=0;i<4;i++){
    digitalWrite(leds[i], 0);    
  }
}