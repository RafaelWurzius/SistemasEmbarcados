int pot;

void setup() {
	Serial.begin(9600);
	pinMode(13,OUTPUT);
	pinMode(2,INPUT);
}

void loop() {
	pot = analogRead(A0);
	if(digitalRead(2)==HIGH and pot>253){
		digitalWrite(13,HIGH);
	}
	
	if(digitalRead(2)==HIGH){
		Serial.println(pot);
		while(digitalRead(2)==HIGH) delay(10);
	}
	
	if(digitalRead(2)==LOW){
		digitalWrite(13,LOW);
	}
}




