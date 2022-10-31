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
  //Round-Robin Left to Right
  //1s Delay
  digitalWrite(l1, HIGH);
  delay(1000);
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  delay(1000);
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  delay(1000);
  digitalWrite(l3, LOW);
  digitalWrite(l4, HIGH);
  delay(1000);
  digitalWrite(l4, LOW);
  digitalWrite(l5, HIGH);
  delay(1000);
  digitalWrite(l5, LOW);
  digitalWrite(l6, HIGH);
  delay(1000);
  digitalWrite(l6, LOW);
  //Round-Robin Right to Left
  //1s Delay
  digitalWrite(l6, HIGH);
  delay(1000);
  digitalWrite(l6, LOW);
  digitalWrite(l5, HIGH);
  delay(1000);
  digitalWrite(l5, LOW);
  digitalWrite(l4, HIGH);
  delay(1000);
  digitalWrite(l4, LOW);
  digitalWrite(l3, HIGH);
  delay(1000);
  digitalWrite(l3, LOW);
  digitalWrite(l2, HIGH);
  delay(1000);
  digitalWrite(l2, LOW);
  digitalWrite(l1, HIGH);
  delay(1000);
  digitalWrite(l1, LOW);
}
