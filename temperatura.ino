float pot, temperatura;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(A0));
  pot = analogRead(A0);
  temperatura = pot * 0.0048828125 * 100;

  Serial.print(pot);
  Serial.print("  ");
  Serial.println(temperatura);


}
