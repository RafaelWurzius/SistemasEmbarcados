int S;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  switch (S) {
    case 0:
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);

      if (digitalRead(2)) {
        S = 1;
        while (digitalRead(2)) delay(10);
      }
    break;

    case 1:
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);

      if (digitalRead(2)) {
        S = 2;
        while (digitalRead(2)) delay(10);
      }
      
      if (digitalRead(3)) {
        S = 0;
        while (digitalRead(3)) delay(10);
      }
    break;

    case 2:
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);

      if (digitalRead(2)) {
        S = 3;
        while (digitalRead(2)) delay(10);
      }
      
      if (digitalRead(3)) {
        S = 0;
        while (digitalRead(3)) delay(10);
      }
    break;

    case 3:
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);

      if (digitalRead(2)) {
        S = 0;
        while (digitalRead(2)) delay(10);
      }
      
      if (digitalRead(3)) {
        S = 0;
        while (digitalRead(3)) delay(10);
      }
    break;
  }
}
