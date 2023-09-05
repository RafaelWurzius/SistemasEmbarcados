// Faça um sistema que compare o sinal analógico de duas entradas. Quando a diferença entre eles for menor que 50 um led deve ligar, caso contrario esse led deve desligar.

int diferenca = 0;
void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  diferenca = analogRead(A4) - analogRead(A5);

  Serial.print("A5: "); 
  Serial.print(analogRead(A5)); 
  Serial.print("\t"); 
  Serial.print("A4: "); 
  Serial.print(analogRead(A4)); 
  Serial.print("\t"); 
  Serial.print("Diferenca: "); 
  Serial.println(diferenca); 

  if(diferenca > -50 && diferenca < 50){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }

}
