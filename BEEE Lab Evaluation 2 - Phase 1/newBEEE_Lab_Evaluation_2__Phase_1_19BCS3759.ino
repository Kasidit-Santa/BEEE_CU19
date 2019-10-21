int pinButton1 = 2;
int pinButton2 = 3;
int LED1 = 13;
int LED2 =12;

void setup() {
  // put your setup code here, to run once:
pinMode(pinButton1,INPUT);
pinMode(pinButton2, INPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int a,b;  
int n = digitalRead(pinButton1);
int m = digitalRead(pinButton2);
while(n == 1)
{
  a = 1;
}
while(m == 1)
{
  b = 1;
}
int stateButton = a+b;
if(stateButton == 2)
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
}
else if(stateButton == 1)
{
  digitalWrite(LED2, HIGH);
}
else {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
}
