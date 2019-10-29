unsigned long lastMillis;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize millis var
  lastMillis = millis();
}

// the loop function runs over and over again forever
void loop() {
  
  if ((millis() - lastMillis) > 500)
  {
    if (digitalRead(LED_BUILTIN) == HIGH) { 
      // turn the LED off by making the voltage LOW
      digitalWrite(LED_BUILTIN, LOW);
    } else {
      // turn the LED on (HIGH is the voltage level)
      digitalWrite(LED_BUILTIN, HIGH);
    } 
    // get current millis to initialize a new timer
    lastMillis = millis();
  }
}
