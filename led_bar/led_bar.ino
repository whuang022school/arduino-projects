
const int ledCount = 10;    // the number of LEDs in the bar

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // an array of pin numbers to which LEDs are attached


void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
    digitalWrite(ledPins[thisLed], LOW);
  }
}

void loop() {
  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
      digitalWrite(ledPins[ledCount-thisLed], LOW);
      digitalWrite(ledPins[thisLed],LOW);
      digitalWrite(ledPins[ledCount-thisLed-1], LOW);
      digitalWrite(ledPins[thisLed-1],LOW);
      
      delay(50);
      digitalWrite(ledPins[ledCount-thisLed], HIGH);
      digitalWrite(ledPins[thisLed],HIGH);
      digitalWrite(ledPins[ledCount-thisLed-1],HIGH);
      digitalWrite(ledPins[thisLed-1],HIGH);
  }
  
}
