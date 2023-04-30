int buzzerPin = 9  ;  // Set the digital pin for the buzzer

void setup() {
  // Set the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Generate a 1kHz tone on the buzzer for 500ms
  tone(buzzerPin, 500, 100);
  
  // Wait for 1 second before generating the tone again
  delay(200);
}
