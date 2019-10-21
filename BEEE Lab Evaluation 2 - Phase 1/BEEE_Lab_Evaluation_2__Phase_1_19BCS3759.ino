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
int stateButton = digitalRead(pinButton1)+digitalRead(pinButton2);
if(stateButton == 2)
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
}
else if(stateButton == 1)
{
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
}
else {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
}
