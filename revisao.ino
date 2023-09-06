//fazer com que o led aumente o brilho quando um botão for pressionado. Velocidade regulada pelo potenciometro. Devendo apagar em seguida
// tempo = map(entrada,0,1023,0,50);
int brilho = 0;
bool ligado = false;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2)) {
    ligado = true;
  }

  if (ligado) {
    analogWrite(9, brilho);
    brilho++;
    delay(30);
  }

  if (brilho > 255) {
    brilho = 0;
    analogWrite(9, brilho);
    ligado = false;
  }
}
