//https://yorbuino.wixsite.com/leer-arduino

// De setup wordt 1 keer uitgevoerd als de code start
void setup() {
  // Stel de digitale pin LED_BUILTIN in als een uitvoer
  pinMode(LED_BUILTIN, OUTPUT);
}

// De loop wordt oneindig keer herhaald
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Zet de ingebouwde LED aan
  delay(1000);                       // Wacht 1 seconde
  digitalWrite(LED_BUILTIN, LOW);    // Zet de ingebouwde LED uit
  delay(1000);                       // Wacht 1 seconde
}
