void setup() {
  for(int i=10;1<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  

}

void loop() {
  for(int i=10;i<14;i++)
  {
    allledsoff();
    if(i!=13)
    {
     digitalWrite(i,HIGH);
     digitalWrite(i+1,HIGH);
     delay(200);
    }
    else
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(200);
      allledsoff();
    }
  }

}
void allledsoff(void)
{
  for(int i=10;i<=14;i++)
  {
    digitalWrite(i,LOW);
  }
delay(100);
}
