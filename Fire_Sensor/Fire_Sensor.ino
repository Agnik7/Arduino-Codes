int flamePin = 2;   
int relayPin = 3;    
int buzzerPin = 4;   

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int flameDetected = digitalRead(flamePin);

  if (flameDetected == HIGH) {
    // Flame detection 
    Serial.println("Fire detected!");
    digitalWrite(relayPin, HIGH);  // Turn on the relay (water out through pump)
    digitalWrite(buzzerPin, HIGH); // Activate the buzzer
  } 
  else {
    // No flame detection
    digitalWrite(relayPin, LOW);   // Turn off the relay
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
  }

  delay(1000); 
}
