// Code to detect vibration using vibration sensor
int Dig_pin = 7;
int Ana_pin = A0;
int Dig_out = LOW;
int Ana_out = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Dig_pin, INPUT);
  pinMode(Ana_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Dig_out = digitalRead(Dig_pin);
  Ana_out = analogRead(Ana_pin);
  Serial.print("Analog: ");
  Serial.print(Ana_out);
  Serial.print("  Digital: ");
  Serial.print(Dig_out);
  if(Ana_out <= 500){
    digitalWrite(13,HIGH);
    Serial.println("Vibration Detected!!!!!");
    Serial.println();
    Serial.println();
    }
  else
  {
    
    digitalWrite(13,LOW);
    Serial.println("Vibration NOT Detected");
    Serial.println();
    Serial.println();
    }
  delay(500);
}
