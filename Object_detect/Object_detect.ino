// Code to detect object using ultrasonic sensor
  
  int pin=12;
  const  int trigger=6;
  const  int echo=7;
  float  distance;
  float dist_inches;
  
  void setup(){
    Serial.begin(9600);
    pinMode(trigger,OUTPUT);
    pinMode(echo,INPUT);
    pinMode(pin,OUTPUT);
  }
  
  void loop(){
    digitalWrite(trigger,LOW);
    delayMicroseconds(5);
    
    
    digitalWrite(trigger,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger,LOW);
    
    
    distance=pulseIn(echo,HIGH);
    distance=distance*0.0001657;
    dist_inches=distance*39.37;
 
    if(dist_inches < 6){ //if distance of object is less than 6 inches
      digitalWrite(pin,HIGH);
      Serial.println("Object Found");
    }
    else{ 
      digitalWrite(pin,LOW);
      Serial.println("Object Not Found");
    }
    
    
  }
