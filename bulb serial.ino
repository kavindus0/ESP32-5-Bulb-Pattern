#include <stdio.h>

void setup() {
  int pinSet[] = { 12, 27, 25, 13, 32 };
  int bitSet[] = { 0, 0, 0, 0, 0 };


  for (int i = 0; i < (sizeof(pinSet) / sizeof(pinSet[0])); i++) {
    pinMode(pinSet[i], OUTPUT);
  }
}


void decToBinary(int n) {
  int pinSet[] = { 12, 27, 25, 13, 32 };

  // array to store binary number
  int binaryNum[5];

  // counter for binary array
  int i = 0;
  while (n > 0) {
    // storing remainder in binary array
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  // printing binary array in reverse order
  for (int j = i - 1; j >= 0; j--) {
    Serial.printf("%d", binaryNum[j]);
    if (binaryNum[i] == 1)
      digitalWrite(pinSet[j], HIGH);
    else
      digitalWrite(pinSet[5-j], HIGH);
  }
  delay(2000);
}

void loop() {
  Serial.begin(9600);

  for (int i = 0; i <= 31; i++) {
    decToBinary(i);
    //Serial.print('%d',i);
    //Serial.print(%s,'\n');
    delay(1000);
  }
}
