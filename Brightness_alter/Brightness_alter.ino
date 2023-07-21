// Code to alter brightness of light
#define LED_PIN 11
int brightness = 0, fadeAmount = 5;
void setup()
{
    // put your setup code here, to run once:
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    analogWrite(LED_PIN, brightness);
    brightness += fadeAmount;
    if (brightness <= 0 || brightness >= 255)
        fadeAmount = -fadeAmount;
    delay(30);
}
