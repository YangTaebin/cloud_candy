int DIR = 10;
int PWM = 11;
int BRK = 12;
int BUTTON = 13;
bool work = false;
void setup(){
  pinMode(DIR, OUTPUT);
  pinMode(PWM, OUTPUT);
  pinMode(BRK, OUTPUT);
  pinMode(BUTTON, INPUT);
  digitalWrite(DIR, HIGH);
  digitalWrite(BRK, HIGH);
}

void loop(){
  int butt = digitalRead(BUTTON);
  if(work != butt){
    work = (butt==1);
  }
  if(work){
    digitalWrite(BRK, LOW);
    digitalWrite(PWM, HIGH);
    delayMicroseconds(10);
    digitalWrite(PWM, LOW);
    delayMicroseconds(10);
  }
}
