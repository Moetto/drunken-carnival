#include <Servo.h>

Servo myServo;

int switchState = 0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(12, INPUT);

}

void loop() {
  switchState = digitalRead(12);
  if(switchState != 0){
     myServo.write(179);
     delay(2000);
  }
  myServo.write(0);
  delay(100);
}
