//Serie fibbonacci con leds en binario

int leds[] = { 3, 5, 6, 7, 8, 9, 10, 11 };
int i;
int tiempoApagado = 500;
int tiempoPrendido = 1000;
int binar[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
int numFib1 = 0;
int numFib2 = 1;
int sumaFib = 1;

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
  if (numFib1 > 254) {
    numFib1 = 0;
    numFib2 = 1;
    sumaFib = 1;
  }
  encenderLeds();
  binario(numFib1);
  serieFib();
  
}

void serieFib() {
  Serial.println(String(numFib1));
  
  sumaFib = numFib1 + numFib2;
  numFib1 = numFib2;
  numFib2 = sumaFib;
}

void binario(int n) {
  int j = 7;
  for (i = 0; i < 8; i++) {
    if (n == 0) {
      binar[j] = 0;
    } else if (n % 2 == 1) {
      binar[j] = 1;
      n = n / 2;
    } else if (n % 2 == 0) {
      binar[j] = 0;
      n = n / 2;
    }
    j--;
  }
}

void encenderLeds(){
  int j=7;
  for (i = 0; i < 8; i++) {
    digitalWrite(leds[j], binar[i]);
    Serial.print(String(binar[i]));
    j--;
  }
  Serial.println("");
  
  delay(700);
}
