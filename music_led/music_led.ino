int speakerPin = 5;
int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

int tempo = 300;
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 261, 294, 330, 349, 392, 440, 494, 523 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}
void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode (12,OUTPUT);
}
void loop() {
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
      //digitalWrite(12,LOW);
    } else {
      digitalWrite(12,LOW);
      playNote(notes[i], beats[i] * tempo);
       digitalWrite(12,HIGH);
    }
    
    // pause between notes
    delay(tempo / 2); 
  }
}
