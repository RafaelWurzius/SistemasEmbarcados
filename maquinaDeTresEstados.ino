int estado=0;

void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
	switch(estado) {
		case 0:
			//oq faz
			digitalWrite(13,LOW);
			
			//quando e pra onde vai
			if(digitalRead(2)==HIGH){
				estado=1;
				while(digitalRead(2)==HIGH) delay(10);
			}
		break;
		
		case 1:
			//oq faz
			digitalWrite(13,HIGH);
			
			//quando e pra onde vai
			if(digitalRead(2)==HIGH){
				estado=2;
				while(digitalRead(2)==HIGH) delay(10);
			}
			
			if(digitalRead(3)==HIGH){
				estado=0;
				while(digitalRead(3)==HIGH) delay(10);
			}
		break;
		
		case 2:
			//oq faz
			digitalWrite(13,HIGH);
			delay(500);
			digitalWrite(13,LOW);
			delay(500);
			
			//quando e pra onde vai
			if(digitalRead(2)==HIGH){
				estado=0;
				while(digitalRead(2)==HIGH) delay(10);
			}
		break;
  	}
}
