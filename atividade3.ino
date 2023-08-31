//     Faça um sistema que quando o botão 2 for pressionado o led 13 deve ligar, quando o botão 3 for pressionado o led 12 deve ligar.
//      Os leds desligarão quando ambos estiveram ligados por 5s.

bool led1 = false, led2 = false;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2)) {
    digitalWrite(13, 1);
    led1 = true;
  }

  if (digitalRead(3)) {
    digitalWrite(12, 1);
    led2 = true;
  }

  if (led1 && led2) {
    delay(5000);
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    led1 = false;
    led2 = false;
  }
}
