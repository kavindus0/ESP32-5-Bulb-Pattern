#include <stdio.h>

void setup() {
  // put your setup code here, to run once:
  int pinSet[] = {12,27,25,32,13};
  for (int i = 0; i < (sizeof(pinSet)/sizeof(pinSet[0])); i++){
    pinMode(pinSet[i],OUTPUT);
  }

}

void loop() {
  int pinSet[] = {12,27,25,32,13};
  int arrLen = (sizeof(pinSet)/sizeof(pinSet[0]));
  // put your main code here, to run repeatedly:
   for (int i = 0; i < arrLen ; i++){
     digitalWrite(pinSet[i],HIGH);
     delay(40);
      digitalWrite(pinSet[arrLen-i],HIGH);
      delay(40);
     }
for (int i = 0; i < arrLen ; i++){
     digitalWrite(pinSet[i],LOW);
     delay(40);
      digitalWrite(pinSet[arrLen-i],LOW);
      delay(40);
     }

     //digitalWrite(pinSet)
   }
  


