#include <Servo.h>
Servo myservo;
int angle = 0;
int angleStep = 100;

void setup(){
  myservo.attach(8);//pin servo
  pinMode(2,INPUT_PULLUP);//pin infrared
}

void loop(){
  if (digitalRead(2) == HIGH){
    myservo.write(180);
  }
  else{
    myservo.write(-180);
  }
}
