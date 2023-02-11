int led = 3;
int pot = A0;
int valor;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot);
  valor = map(valor, 0, 1023, 0, 1);
  Serial.println(String(valor));
  delay(300);
  puertaNOT(valor);
}

void puertaNOT(int v) {
  if(v == 0){
    digitalWrite(led, 1);
  }else{
    digitalWrite(led, 0);
  }
}