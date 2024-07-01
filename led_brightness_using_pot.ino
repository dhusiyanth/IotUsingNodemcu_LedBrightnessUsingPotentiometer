int brightness;
int value;
int pot=A0;
int led=D1;
void setup()
{
pinMode(led,OUTPUT);
pinMode(pot,INPUT);
}
void loop()
{
value=analogRead(pot);
brightness=value/4;
digitalWrite(led,brightness);
}
