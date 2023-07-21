// Code to blink light at an interval of 2 seconds
#define LED_PIN 11

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(2000);
  digitalWrite(LED_PIN, LOW);
  delay(2000);
  
}
