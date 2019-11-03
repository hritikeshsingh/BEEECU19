void setup() {
  pinMode(2,INPUT);
  pinMode(11,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int reading = digitalRead(2);
  if (reading==HIGH);
  {
    digitalWrite(11,HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }
  // put your main code here, to run repeatedly:

}
