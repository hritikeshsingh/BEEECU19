int sensorValue = 0;
void setup()
{
 
 
  pinMode(9,OUTPUT);
   Serial.begin(9600);
  pinMode(A0,INPUT);
 
}
void loop()
{
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  
  delay(100);
  if(sensorValue>300)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }
}
