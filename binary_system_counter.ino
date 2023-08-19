
const int ledPins[] = {2, 3, 4, 5, 6};
int counter = 0;
void setup(){
  for (int i = 0;i<5;i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop(){
    counter++;
    displayBinary(counter);
    delay(500);
}


void displayBinary(int count){
   for (int i = 0;i<5;i++)
   {
    int bit = bitRead(counter, i);
    digitalWrite(ledPins[i], bit);
   }
}


