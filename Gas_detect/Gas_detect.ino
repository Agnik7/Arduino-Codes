// Gas Detection using MQ-135 gas sensor
// MQ-135 detects air quality (benzene, alcohol, smoke)

const int anaPin = A0;
const int digPin = 12;

void setup()
{
    pinMode(anaPin, INPUT);
    pinMode(digPin, INPUT);
    Serial.begin(9600);
    Serial.println("Sensor is warming up...");
    delay(20000); // Delay for 20 seconds to allow the sensor to warm up
}

void loop()
{
    float ana_val = analogRead(anaPin);
    int dig_val = digitalRead(digPin);

    if (ana_val > 400)
    {
        Serial.println("Gas Detected");
    }
    else
    {
        Serial.println("Gas not detected");
    }

    delay(1000); // Add a delay to prevent continuous readings and serial output
}
