// Display random values in Serial Monitor
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = random(100);
  Serial.println(value);
  delay(2000);
}
