void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT); //the pin that the motor is connected to + GND
}

void loop() {
  while(Serial.available()) {
  char input = Serial.read(); //reading the character sent serialy from the key.py
  if (input=='w'){
    digitalWrite(13, HIGH); //if it is the right command the motor rotates
  }
  else{
    digitalWrite(13, LOW); //if wrong one the motor is stopped
  }
    
             
}
}
