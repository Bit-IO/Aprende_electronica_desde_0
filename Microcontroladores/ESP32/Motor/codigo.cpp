inA = 8;
inB = 9;
pwm =11;

void setup(){
  pinMode(inA, OUTPUT);
  pinMode(inB, OUTPUT);
}

void loop(){
  digitalWrite(inA, HIGH);
  digitalWrite(inB, LOW);
  delay(2000);
  digitalWrite(inA, LOW);
  digitalWrite(inB, HIGH);
  delay(2000);
}