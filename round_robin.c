//Rod Kristian J. Rebarbas
//BSCpE 4A
//CPE 411 - Embedded Systems
//Activity #6
//Round Robin Code

//Declaring variables for the LEDs globally
int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;
int l6 = 7;

//Setup
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
  //Round Robin Left to Right
  //1s Delay
  digitalWrite(l1, HIGH);//on
  delay(1000);
  digitalWrite(l1, LOW);//off
  digitalWrite(l2, HIGH);//on
  delay(1000);
  digitalWrite(l2, LOW);//off
  digitalWrite(l3, HIGH);//on
  delay(1000);
  digitalWrite(l3, LOW);//off
  digitalWrite(l4, HIGH);//on
  delay(1000);
  digitalWrite(l4, LOW);//off
  digitalWrite(l5, HIGH);//on
  delay(1000);
  digitalWrite(l5, LOW);//off
  digitalWrite(l6, HIGH);//on
  delay(1000);
  digitalWrite(l6, LOW);//off
  //Round Robin Right to Left
  //1s Delay
  digitalWrite(l6, HIGH);//on
  delay(1000);
  digitalWrite(l6, LOW);//off
  digitalWrite(l5, HIGH);//on
  delay(1000);
  digitalWrite(l5, LOW);//off
  digitalWrite(l4, HIGH);//on
  delay(1000);
  digitalWrite(l4, LOW);//off
  digitalWrite(l3, HIGH);//on
  delay(1000);
  digitalWrite(l3, LOW);//off
  digitalWrite(l2, HIGH);//on
  delay(1000);
  digitalWrite(l2, LOW);//off
  digitalWrite(l1, HIGH);//on
  delay(1000);
  digitalWrite(l1, LOW);//off
}
