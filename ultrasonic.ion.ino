void setup() {
  
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);

  long duration=pulseIn(9,HIGH);
  int distance = duration*0.034/2;
  Serial.println(distance);

}
