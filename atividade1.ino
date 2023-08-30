// Faça um código que ligue a quantidade de leds em ordem conforme a quantidade de botões sejam pressionados. Três botões e três leds. 
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(2) || digitalRead(3) || digitalRead(4)) {
    digitalWrite(13, 1);
  }

  if ((digitalRead(2) && digitalRead(3)) || (digitalRead(2) && digitalRead(4)) || (digitalRead(4) && digitalRead(3))) {
    digitalWrite(13, 1);
    digitalWrite(12, 1);
  }


  if (digitalRead(2) && digitalRead(3) && digitalRead(4)) {
    digitalWrite(13, 1);
    digitalWrite(12, 1);
    digitalWrite(11, 1);
  }

  if(!digitalRead(2) && !digitalRead(3) && !digitalRead(4)){
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
  }
}
