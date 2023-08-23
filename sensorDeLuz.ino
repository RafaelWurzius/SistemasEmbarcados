//luz
int pot, luz;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  Serial.println(analogRead(A1));
  luz = analogRead(A1);

  if (luz > 600) {
    digitalWrite(13, LOW);
  }
  if (luz < 500) {

    digitalWrite(13, HIGH);
  }
}
