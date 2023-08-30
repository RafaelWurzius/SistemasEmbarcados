//    Faça um sistema que conte o total de vezes que os pinos D2 ao D05 foram pressionados. Esse valor deve ser mostrado na serial. 

int cont = 0;

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
  if (digitalRead(2) || digitalRead(3) || digitalRead(4)) {
    cont++;
    while (digitalRead(2) == HIGH || digitalRead(3) == HIGH || digitalRead(4) == HIGH  )
      delay(10);
  }

  Serial.println(cont);
  
}
