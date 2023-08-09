int estado = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  switch (estado) {
    case 0:
      digitalWrite(13, LOW);
      if(digitalRead(2)){
        estado = 1;
        while (digitalRead(2) == HIGH) delay(10);

      }  
    break;

    case 1:
      digitalWrite(13, HIGH);
      if(digitalRead(2)) {
        estado = 0;
        while (digitalRead(2) == HIGH) delay(10);
      } 
    break;
  }
}
