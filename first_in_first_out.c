int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;
int l6 = 7;

void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
}

void loop()
{
  //LED1 = 10 seconds on
  digitalWrite(l1, HIGH);
  delay(10000);
  digitalWrite(l1, LOW);
  //LED2 = 5 seconds on
  digitalWrite(l2, HIGH);
  delay(5000);
  digitalWrite(l2, LOW);
  //LED3 = 8 seconds on
  digitalWrite(l3, HIGH);
  delay(8000);
  digitalWrite(l3, LOW);
  //LED4 = 3 seconds on
  digitalWrite(l4, HIGH);
  delay(3000);
  digitalWrite(l4, LOW);
  //LED5 = 1 seconds on
  digitalWrite(l5, HIGH);
  delay(1000);
  digitalWrite(l5, LOW);
  //LED6 = 2 seconds on
  digitalWrite(l6, HIGH);
  delay(2000);
  digitalWrite(l6, LOW);
}
