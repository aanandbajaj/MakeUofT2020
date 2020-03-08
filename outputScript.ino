#include <Servo.h>             //Servo library
 
Servo thumb;        //initialize a servo object for the connected servo  
Servo index;
Servo middle;
Servo ring;
Servo pinky;
int thumbn = 7;
int indexn = 8;
int middlen = 9;
int ringn = 10;
int pinkyn = 11;

int state = 0;
                
 
void setup() 
{ 
  Serial.begin(9600);
  thumb.attach(thumbn);      // attach the signal pin of servo to pin9 of arduino
  index.attach(indexn);      // attach the signal pin of servo to pin9 of arduino
  middle.attach(middlen);      // attach the signal pin of servo to pin9 of arduino
  ring.attach(ringn);      // attach the signal pin of servo to pin9 of arduino
  pinky.attach(pinkyn);      // attach the signal pin of servo to pin9 of arduino
  thumb.write(0);
  index.write(0);
  
} 
  
void loop() 
{
  if (Serial.available()>0){
    state = Serial.read();
    Serial.write(state);
  }

  if (state == '1'){
    thumb.write(180);
    delay(1000);
    thumb.write(0);
    state = 0;
  }
  else if (state == '2'){
    state=0;
  }
  else if (state == '3'){
    state=0;
  }
  else if (state == '4'){
    state=0;
  } 
  else if (state == '5'){
    state=0;
  }
//  else{
//    Serial.println("Mode 0");
//  }
//
}
