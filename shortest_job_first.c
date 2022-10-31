//Rod Kristian J. Rebarbas
//BSCpE 4A
//CPE 411 - Embedded Systems
//Activity #6
//Shortest Job First Code

//Declaring variables for the LEDs globally
int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;
int l6 = 7;

//Shortest Job First function
void shortestjobfirst()
{
  //Executes shortest ms first up to longest ms
  
  //Looping Sequence
  for(int i=0;i<=6;i++){
    if(i==1){
      digitalWrite(l5, HIGH);
      delay(1000);
      digitalWrite(l5, LOW);
    }
    if(i==2){
      digitalWrite(l6, HIGH);
      delay(2000);
      digitalWrite(l6, LOW);
    }
    if(i==3){
      digitalWrite(l4, HIGH);
      delay(3000);
      digitalWrite(l4, LOW);
    }
    if(i==4){
       digitalWrite(l2, HIGH);
       delay(5000);
       digitalWrite(l2, LOW);
    }
    if(i==5){
      digitalWrite(l3, HIGH);
      delay(8000);
      digitalWrite(l3, LOW);
    }
    if(i==6){
      digitalWrite(l1, HIGH);
      delay(10000);
      digitalWrite(l1, LOW);
    }
  }
}

//Setup
void setup()
{
  //Setting up pins to output to light up LEDs
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
}

//Loop executes repeatedly
void loop()
{
  //Shortest Job First
  //Shortest to Longest Time(ms) Delay
  
  //Executes shortestjobfirst() function
  shortestjobfirst();
}
