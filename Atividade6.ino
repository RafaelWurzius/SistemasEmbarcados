//  Faça um programa que pisque um led, porem o tempo em que o led ficará ligado é correspondente ao valor da entrada analógica A0
//  e o tempo em que o led ficará desligado é correspondente ao valor da entrada analógica A1. Ambos os valores devem aparecer na Serial.

int ligado = 0, desligado = 0;

void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ligado = analogRead(A5) * 3;
  desligado = analogRead(A4) * 3;

  Serial.print("Ligado: ");
  Serial.print(ligado);
  Serial.print("\t");
  Serial.print("Desigado: ");
  Serial.println(desligado);

  digitalWrite(11, HIGH);
  delay(ligado);

  digitalWrite(11, LOW);
  delay(desligado);
}
