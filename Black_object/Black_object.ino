// Code to detect black object using infrared sensor.
void setup()
{
    // put your setup code here, to run once:
    pinMode(13, OUTPUT);
    pinMode(10, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int SensorValue = digitalRead(10);
    Serial.print("IR pin value: ");
    Serial.print(SensorValue);
    if (!SensorValue)
    {
        digitalWrite(13, HIGH);
        Serial.println("Object is not black");
    }
    else
    {
        digitalWrite(13, LOW);
        Serial.println("Object is Black");
    }
    delay(100);
}
