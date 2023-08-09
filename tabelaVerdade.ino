bool a,b,c,s;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
    a = digitalRead(2);
    b = digitalRead(3);
    c = digitalRead(4);

    if(a == 0 && b == 0 && c == 0) digitalWrite(13, LOW);
    if(a == 0 && b == 0 && c == 1) digitalWrite(13, HIGH);
    if(a == 0 && b == 1 && c == 0) digitalWrite(13, 1);
    if(a == 0 && b == 1 && c == 1) digitalWrite(13, 0);
    if(a == 1 && b == 0 && c == 0) digitalWrite(13, 1);
    if(a == 1 && b == 0 && c == 1) digitalWrite(13, 0);
    if(a == 1 && b == 1 && c == 0) digitalWrite(13, 1);
    if(a == 1 && b == 1 && c == 1) digitalWrite(13, 0);
    Serial.println("Rafael-");
}
