
void setup() {
  int pinSet[] = {12,27,25,32,13};
  for (int i = 0; i < (sizeof(pinSet)/sizeof(pinSet[0])); i++){
    pinMode(pinSet[i],OUTPUT);
  }
}

void loop() {
  int pinSet[] = {12,27,25,32,13};
  int arrLen = (sizeof(pinSet)/sizeof(pinSet[0]));

   for (int i = 0; i < arrLen ; i++){
     digitalWrite(pinSet[i],HIGH);
     delay(100);
      digitalWrite(pinSet[arrLen-i],HIGH);
      delay(100);
     }
  for (int i = 0; i < arrLen ; i++){
       digitalWrite(pinSet[i],LOW);
       delay(100);
        digitalWrite(pinSet[arrLen-i],LOW);
        delay(100);
       }
   }
  


