// Code to detect objects using an ultrasonic sensor

const int trigPin = 6;
const int echoPin = 7;
const int ledPin = 12;

void setup()
{
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    float duration = pulseIn(echoPin, HIGH);
    float distance_cm = duration * 0.0343 / 2.0;
    float distance_inches = distance_cm * 0.3937;

    if (distance_inches < 6)
    { // If distance of object is less than 6 inches
        digitalWrite(ledPin, HIGH);
        Serial.println("Object Found");
    }
    else
    {
        digitalWrite(ledPin, LOW);
        Serial.println("Object Not Found");
    }
}
