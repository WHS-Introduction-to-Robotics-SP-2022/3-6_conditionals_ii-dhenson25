/*

*/


int pin = A0;
int x;

void setup() {

pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
Serial.begin(9600);
  
}

void loop() {
x=analogRead(A0);
Serial.println(x);

if(x<146){
  analogWrite(11, 255);
  analogWrite(10, 0);
  analogWrite(9, 0);
}
else if(x<292&&x>146){
  analogWrite(11, 255);
  analogWrite(10, 25);
  analogWrite(9, 0);
}
else if(x<438&&x>292){
  analogWrite(11, 240);
  analogWrite(10, 240);
  analogWrite(9, 0);
}
else if(x<584&&x>438){
  analogWrite(11, 0);
  analogWrite(10, 255);
  analogWrite(9, 0);
}
else if(x<730&&x>584){
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 255);
}
else if(x<876&&x>730){
  analogWrite(11, 100);
  analogWrite(10, 0);
  analogWrite(9, 240);
}
else{
  analogWrite(11, 200);
  analogWrite(10, 0);
  analogWrite(9, 240);
}
  

  
}
