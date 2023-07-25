// Code to detect black object using infrared sensor.
#define inp 13
#define out 10
void setup()
{
    // put your setup code here, to run once:
    pinMode(inp, OUTPUT);
    pinMode(out, INPUT);
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
        digitalWrite(inp, HIGH);
        Serial.println("Object is not black");
    }
    else
    {
        digitalWrite(inp, LOW);
        Serial.println("Object is Black");
    }
    delay(100);
}
