//  Faça um sistema que quando o botão 2 for pressionado o led 13 deve ligar, quando o botão 3 for pressionado o led 12 deve ligar.
//  Os leds desligarão quando ambos estiveram ligados por 5s.
bool led1 = false, led2 = false;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(2)) {
    digitalWrite(13, HIGH);
    led1 = true;
  }

  if (digitalRead(3)) {
    digitalWrite(12, HIGH);
    led2 = true;
  }

  if (led1 && led2) {
    delay(5000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    led1 = false, led2 = false;
  }
}
