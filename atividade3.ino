//  Faça um código que ligue a quantidade de leds em ordem conforme a quantidade de botões sejam pressionados. Três botões e três leds. 

//     Faça um sistema que conte o total de vezes que os pinos D2 ao D05 foram pressionados. Esse valor deve ser mostrado na serial. 

//     Faça um sistema que quando o botão 2 for pressionado o led 13 deve ligar, quando o botão 3 for pressionado o led 12 deve ligar. Os leds desligarão quando ambos estiveram ligados por 5s. 

//     Faça um código que um led inicie desligado e aumente seu brilho progressivamente até atingir o brilho máximo, em 10s, devendo apagar e iniciar novamente. 

// Faça um sistema que compare o sinal analógico de duas entradas. Quando a diferença entre eles for menor que 50 um led deve ligar, caso contrario esse led deve desligar.

//     Faça um programa que pisque um led, porem o tempo em que o led ficará ligado é correspondente ao valor da entrada analógica A0 e o tempo em que o led ficará desligado é correspondente ao valor da entrada analógica A1. Ambos os valores devem aparecer na Serial. 

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
  if (digitalRead(2)) {
    digitalWrite(13, 1);
  }

  if (digitalRead(3)) {
    digitalWrite(12, 1);
  }

  if (digitalRead(2) && digitalRead(3)) {
    digitalWrite(12, 0);
    digitalWrite(13, 0);
  }

}
