int ldr=A0;
#include<Servo.h>
Servo s;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr,INPUT);
  Serial.begin(9600);
  pinMode(A1,OUTPUT);
  s.attach(A1);

}

void loop() {
  int a=analogRead(ldr);
  Serial.println(a);
  delay(1000);
  if (a>=10){
    s.write(50);
  }
  else if(a<10){
    s.write(-50);
  }
  // put your main code here, to run repeatedly:

}
