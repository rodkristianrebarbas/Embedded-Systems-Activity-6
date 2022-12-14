//Rod Kristian J. Rebarbas
//BSCpE 4A
//CPE 411 - Embedded Systems
//Activity #6
//First in First out Code

//Declaring variables for the LEDs globally
int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;
int l6 = 7;

//Declaring variables for burst times
int t1 = 10000;
int t2 = 5000;
int t3 = 8000;
int t4 = 3000;
int t5 = 1000;
int t6 = 2000;

//FIFO function
void fifo()
{
  //FIFO Algorithm
  for(int i=0;i<=6;i++){
    if(i==1){
      //LED1 = 10 seconds on
      digitalWrite(l1, HIGH);
      //10s delay time
      delay(t1);
      //off
      digitalWrite(l1, LOW);
    }
    if(i==2){
      //LED2 = 5 seconds on
      digitalWrite(l2, HIGH);
      //5s delay time
      delay(t2);
      //off
      digitalWrite(l2, LOW);
    }
    if(i==3){
      //LED3 = 8 seconds on
      digitalWrite(l3, HIGH);
      //8s delay time
      delay(t3);
      //off
      digitalWrite(l3, LOW);
    }
    if(i==4){
      //LED4 = 3 seconds on
      digitalWrite(l4, HIGH);
      //3s delay time
      delay(t4);
      //off
      digitalWrite(l4, LOW);
    }
    if(i==5){
      //LED5 = 1 seconds on
      digitalWrite(l5, HIGH);
      //1s delay time
      delay(t5);
      //off
      digitalWrite(l5, LOW);
    }
    if(i==6){
      //LED6 = 2 seconds on
      digitalWrite(l6, HIGH);
      //2s delay time
      delay(t6);
      //off
      digitalWrite(l6, LOW);
    }
  }
}

//Setup
void setup()
{
  //Serial begins at 9600 baud
  Serial.begin(9600);
  //Setting up pins to output to light up LEDs
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  //Starts the program autonomously
  Serial.println("First In First Out Starts");
}

//Loop executes repeatedly
void loop()
{
  //First in First out Execution
  //The first in to first out
  
  //Calling fifo() function
  fifo();
  //Ends the program autonomously
  Serial.println("First In First Out Finished");
  //Stops the looping sequence
  while(Serial.available()==0){}
}
