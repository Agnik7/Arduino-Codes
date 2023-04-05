// Gas Detection using MQ-135 gas sensor
// MQ-135 detects air quality (benzene, alcohol, smoke)


float anaPin = A0;
int digPin = 12;
int dig_val;
float ana_val;
void setup(){
  // put your setup code here, to run once:
  pinMode(anaPin, INPUT);
  pinMode(digPin, INPUT);
  Serial.begin(9600);
  Serial.print("Sensor is warming");
  delay(20000);
}

void loop(){
  // put your main code here, to run repeatedly:
  ana_val = analogRead(anaPin);
  dig_val = digitalRead(digPin);
  if(ana_val > 400){
    Serial.println("Gas Detected");
  }
  else{
    Serial.println("Gas not detected");
  }
}
