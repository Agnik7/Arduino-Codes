const int SensorPin=13, OUT = 12;
int state;
int last=LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SensorPin,INPUT);
  pinMode(OUT,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(SensorPin);
  if(last == LOW && state==HIGH)
  {
  Serial.println("TOUCH detected");
  digitalWrite(OUT,HIGH);
  
  }
  else if(last == HIGH && state==LOW){
  Serial.println("TOUCH released");
  digitalWrite(OUT,LOW);
  
  }
  else if(last == LOW && state==LOW){
  Serial.println("No TOUCH detected");
  digitalWrite(OUT,LOW);
  
  }
  else if(last == HIGH && state==HIGH){
  Serial.println("TOUCH continued");
  digitalWrite(OUT,HIGH);
  
  }
  last = state;
  delay(500);
   
  

}
