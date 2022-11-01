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

//FIFO function
void fifoenqueue()
{
  for(int i=0;i<=6;i++){
    if(i==1){
      //LED1 = 10 seconds on
      digitalWrite(l1, HIGH);
      //10s delay time
      delay(10000);
    }
    if(i==2){
      //LED2 = 5 seconds on
      digitalWrite(l2, HIGH);
      //5s delay time
      delay(5000);
    }
    if(i==3){
      //LED3 = 8 seconds on
      digitalWrite(l3, HIGH);
      //8s delay time
      delay(8000);
    }
    if(i==4){
      //LED4 = 3 seconds on
      digitalWrite(l4, HIGH);
      //3s delay time
      delay(3000);
    }
    if(i==5){
      //LED5 = 1 seconds on
      digitalWrite(l5, HIGH);
      //1s delay time
      delay(1000);
    }
    if(i==6){
      //LED6 = 2 seconds on
      digitalWrite(l6, HIGH);
      //2s delay time
      delay(2000);
    }
  }
}

void fifodequeue()
{
  for(int i=0;i<=6;i++){
    if(i==1){
      //LED1 = 10 seconds off
      digitalWrite(l1, LOW);
      //10s delay time
      delay(10000);
    }
    if(i==2){
      //LED2 = 5 seconds off
      digitalWrite(l2, LOW);
      //5s delay time
      delay(5000);
    }
    if(i==3){
      //LED3 = 8 seconds off
      digitalWrite(l3, LOW);
      //8s delay time
      delay(8000);
    }
    if(i==4){
      //LED4 = 3 seconds off
      digitalWrite(l4, LOW);
      //3s delay time
      delay(3000);
    }
    if(i==5){
      //LED5 = 1 seconds off
      digitalWrite(l5, LOW);
      //1s delay time
      delay(1000);
    }
    if(i==6){
      //LED6 = 2 seconds off
      digitalWrite(l6, LOW);
      //2s delay time
      delay(2000);
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
  //First in First out Execution
  //The first in to first out
  
  //Calling fifoenqueue() function
  fifoenqueue();
  //Calling fifodequeue() function
  fifodequeue();
}
