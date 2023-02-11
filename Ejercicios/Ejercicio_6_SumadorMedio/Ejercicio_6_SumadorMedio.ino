//Sumador Medio

int led[] = {4,3};
int pot[]={A0,A1};
int valor[]={0,0};

void setup() {
  // put your setup code here, to run once:
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor[0] = analogRead(pot[0]);
  valor[1]=analogRead(pot[1]);
  valor[0]=map(valor[0], 0, 1023, 0, 1);
  valor[1]=map(valor[1], 0, 1023, 0, 1);
  Serial.println(String(valor[0])+" uno");
  Serial.println(String(valor[1])+" dos");
  sumador(valor);
  delay(300);
}

void sumador(int *v){
  
  if(v[0]==0&&v[1]==0){
    digitalWrite(led[0],0);
    digitalWrite(led[1],0);
  }
  else if(v[0]==0&&v[1]==1){
    digitalWrite(led[0],1);
    digitalWrite(led[1],0);
  }
  else if (v[0]==1&&v[1]==0){
    digitalWrite(led[0],1);
    digitalWrite(led[1],0);
  }
  else if (v[0]==1&&v[1]==1){
    digitalWrite(led[0],0);
    digitalWrite(led[1],1);
  }
}