const int buttonPin2 = 2;  
const int buttonPin3 = 3; 
const int ledPin = 13; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  
  if ((digitalRead(buttonPin2) || digitalRead(buttonPin3)) && digitalRead(buttonPin2)) {
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }

}
