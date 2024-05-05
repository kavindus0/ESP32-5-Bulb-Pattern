
void setup() {
  int pinSet[] = {12,27,25,32,13};
  for (int i = 0; i < (sizeof(pinSet)/sizeof(pinSet[0])); i++){
    pinMode(pinSet[i],OUTPUT);
  }

}

void loop() {
  int pinSet[] = {12,27,25,13,32};
  int arrLen = (sizeof(pinSet)/sizeof(pinSet[0]));

    for (int i = 0; i < arrLen ; i++){
     digitalWrite(pinSet[i],HIGH);
     delay(50);
     }

    for (int i = 0; i < arrLen ; i++){
     digitalWrite(pinSet[i],LOW);
     delay(50);
     }

   }
  


