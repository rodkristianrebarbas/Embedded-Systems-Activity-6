//Rod Kristian J. Rebarbas
//BSCpE 4A
//CPE 411 - Embedded Systems
//Activity #6
//Round Robin Code

//defining size of six
#define size 6
//declaring len[] array with the size of six
int len[6];

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

//Shortest Job First Function
void sjf(){
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

//LED Display Function
void leddisplay(){
  for(int i=5;i>=0;i--){
    if (len[i] == t1){
      digitalWrite(l1, HIGH);
      delay(t1); 
      digitalWrite(l1, LOW);
    }
    if (len[i] == t2){
      digitalWrite(l2, HIGH);
      delay(t2); 
      digitalWrite(l2, LOW);
    }
    if (len[i] == t3){
      digitalWrite(l3, HIGH);
      delay(t3); 
      digitalWrite(l3, LOW);
    }
    if (len[i] == t4){
      digitalWrite(l4, HIGH);
      delay(t4); 
      digitalWrite(l4, LOW);
    }
    if (len[i] == t5){
      digitalWrite(l5, HIGH);
      delay(t5); 
      digitalWrite(l5, LOW);
    }
    if (len[i] == t6){
      digitalWrite(l6, HIGH);
      delay(t6); 
      digitalWrite(l6, LOW);
    }
  }
}

//Setup
void setup()
{
  //Setup begins at 9600 baud
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
  Serial.println("Shortest Job First Starts");
}

//Loop executes repeatedly
void loop()
{
  //Executes sjf() function
  sjf();
  //Executes leddisplay() function
  leddisplay();
  //Ends the program autonomously
  Serial.println("Shortest Job First Finished");
  //Stops the looping sequence
  while(Serial.available()==0){}
}
