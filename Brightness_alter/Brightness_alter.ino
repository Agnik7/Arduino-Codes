int ledpin = 11, brightness = 0, fadeAmount= 5;
void setup() {
  // put your setup code here, to run once:
  pinMode (ledpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(ledpin, brightness);
  brightness = brightness + fadeAmount;
  if(brightness <=0 || brightness >= 255)
  {
      fadeAmount = -fadeAmount;
    }
  delay(30);
  

}
