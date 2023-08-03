const int buttonPin2 = 2;
const int buttonPin3 = 3;
const int ledPin = 13;
int num = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(2) == HIGH && num < 10) {
    num++;
    while (digitalRead(2) == HIGH)
      delay(10);
  } else if (digitalRead(3) == HIGH && num > 0) {
    num--;
    while (digitalRead(3) == HIGH)
      delay(10);
  }
  if (num == 10) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  Serial.println(num);
}
