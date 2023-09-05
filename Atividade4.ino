//Faça um código que um led inicie desligado e aumente seu brilho progressivamente até atingir o brilho máximo, em 10s, devendo apagar e iniciar novamente.
int brilho = 0;

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {

  if (brilho < 256) {
    analogWrite(11, brilho);
    brilho++;
    delay(10000 / 255);
  }else{
    brilho = 0;
    analogWrite(11, brilho);
    delay(1000);
  }

}
