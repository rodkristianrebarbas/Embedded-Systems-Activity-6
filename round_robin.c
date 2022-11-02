//Rod Kristian J. Rebarbas
//BSCpE 4A
//CPE 411 - Embedded Systems
//Activity #6
//Round Robin Code

//defining size of six
#define size 6

//declaring len[] array with size of six
int len[6];
//qt = quantum time
int qt = 1000;
//other global variables to be seen in loop() function
//and other functions
int mbt;
int rrc;

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

//Descending Sort Function
void sort_desc(){
  int a;
  for (int i = 0; i < 6; ++i) {
     for (int j = i + 1; j < 6; ++j){
        if (len[i] < len[j]) 
          {
             a = len[i];
             len[i] = len[j];
             len[j] = a;
          }
     }
  }
}

//Round Robin Function
void roundrobin(){
  //looping sequence through 2D loop
  for(int i=0;i<rrc;i++){
    for(int j=0;j<size;j++){
      //for LED 1
      if(len[i] == t1){
        if(t1 > qt){
          digitalWrite(l1, HIGH);
          delay(qt);
          digitalWrite(l1, LOW);
          t1 = t1 - qt;
        }
        else if(t1 > 0 <= qt){
          digitalWrite(l1, HIGH);
  		  delay(t1); 
  		  digitalWrite(l1, LOW);
          t1 = 0;
        }
        else{
          Serial.println("LED 1 Completed!");
        }
      }
      //for LED 2
      else if(len[i] == t2){
        if(t2 > qt){
          digitalWrite(l2, HIGH);
          delay(qt);
          digitalWrite(l2, LOW);
          t2 = t2 - qt;
        }
        else if(t2 > 0 <= qt){
          digitalWrite(l2, HIGH);
  		  delay(t2); 
  		  digitalWrite(l2, LOW);
          t2 = 0;
        }
        else{
          Serial.println("LED 2 Completed!");
        }
      }
      //for LED 3
      else if(len[i] == t3){
        if(t3 > qt){
          digitalWrite(l3, HIGH);
          delay(qt);
          digitalWrite(l3, LOW);
          t3 = t3 - qt;
        }
        else if(t3 > 0 <= qt){
          digitalWrite(l2, HIGH);
  		  delay(t3); 
  		  digitalWrite(l3, LOW);
          t3 = 0;
        }
        else{
          Serial.println("LED 3 Completed!");
        }
      }
      //for LED 4
      else if(len[i] == t4){
        if(t4 > qt){
          digitalWrite(l4, HIGH);
          delay(qt);
          digitalWrite(l4, LOW);
          t4 = t4 - qt;
        }
        else if(t4 > 0 <= qt){
          digitalWrite(l4, HIGH);
  		  delay(t4); 
  		  digitalWrite(l4, LOW);
          t4 = 0;
        }
        else{
          Serial.println("LED 4 Completed!");
        }
      }
      //for LED 5
      else if(len[i] == t5){
        if(t5 > qt){
          digitalWrite(l5, HIGH);
          delay(qt);
          digitalWrite(l5, LOW);
          t5 = t5 - qt;
        }
        else if(t5 > 0 <= qt){
          digitalWrite(l5, HIGH);
  		  delay(t5); 
  		  digitalWrite(l5, LOW);
          t5 = 0;
        }
        else{
          Serial.println("LED 5 Completed!");
        }
      }
      //for LED 6
      else if(len[i] == t6){
        if(t6 > qt){
          digitalWrite(l6, HIGH);
          delay(qt);
          digitalWrite(l6, LOW);
          t6 = t6 - qt;
        }
        else if(t6 > 0 <= qt){
          digitalWrite(l6, HIGH);
  		  delay(t6); 
  		  digitalWrite(l6, LOW);
          t6 = 0;
        }
        else{
          Serial.println("LED 6 Completed!");
        }
      }
    }
  }
}


//Setup
void setup()
{
  Serial.begin(9600);
  //Storing values in array len[]
  len[0] = t1;
  len[1] = t2;
  len[2] = t3;
  len[3] = t4;
  len[4] = t5;
  len[5] = t6;
  //Setting up pins to output to light up LEDs
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  //Starts the program autonomously
  Serial.println("Round Robin Starts");
}

//Loop executes repeatedly
void loop()
{
  //Executes sort_desc() function
  sort_desc();
  //mbt = minimum burst time
  mbt = len[0];
  //Finding round robin count
  rrc = mbt/qt;
  //Executes roundrobin() function
  roundrobin();
  //Ends the program autonomously
  Serial.println("Round Robin Finished");
  //Stops the looping sequence
  while(Serial.available()==0){}
}
