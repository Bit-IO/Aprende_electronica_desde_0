int led = 9;

void setup(){
 pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH); //El led enciende
  delay(500);

  digitalWrite(led, LOW);  //El led se apaga
  delay(500);
}