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

//Round Robin Left to Right Function
void roundrobinltr(){
  //Round Robin Left to Right
  //1s Delay
  
  //Looping Sequence
  for(int i=0;i<=6;i++){
    if(i==1){
      digitalWrite(l1, HIGH);//on
      delay(1000);
      digitalWrite(l1, LOW);//off
    }
    if(i==2){
      digitalWrite(l2, HIGH);//on
      delay(1000);
      digitalWrite(l2, LOW);//off
    }
    if(i==3){
      digitalWrite(l3, HIGH);//on
      delay(1000);
      digitalWrite(l3, LOW);//off
    }
    if(i==4){
      digitalWrite(l4, HIGH);//on
      delay(1000);
      digitalWrite(l4, LOW);//off
    }
    if(i==5){
      digitalWrite(l5, HIGH);//on
      delay(1000);
      digitalWrite(l5, LOW);//off
    }
    if(i==6){
      digitalWrite(l6, HIGH);//on
      delay(1000);
      digitalWrite(l6, LOW);//off
    }
  }
}

//Round Robin Right to Left Function
void roundrobinrtl(){
  //Round Robin Right to Left
  //1s Delay
  
  //Looping Sequence
  for(int i=6;i>0;i--){
    if(i==6){
      digitalWrite(l6, HIGH);//on
      delay(1000);
      digitalWrite(l6, LOW);//off
    }
    if(i==5){
      digitalWrite(l5, HIGH);//on
      delay(1000);
      digitalWrite(l5, LOW);//off
    }
    if(i==4){
      digitalWrite(l4, HIGH);//on
      delay(1000);
      digitalWrite(l4, LOW);//off
    }
    if(i==3){
      digitalWrite(l3, HIGH);//on
      delay(1000);
      digitalWrite(l3, LOW);//off
    }
    if(i==2){
      digitalWrite(l2, HIGH);//on
      delay(1000);
      digitalWrite(l2, LOW);//off
    }
    if(i==1){
      digitalWrite(l1, HIGH);//on
      delay(1000);
      digitalWrite(l1, LOW);//off
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
  //Executes roundrobinltr() function
  roundrobinltr();
  //Executes roundrobinrtl() function
  roundrobinrtl();
}
