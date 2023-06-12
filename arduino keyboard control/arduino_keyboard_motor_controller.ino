void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  while(Serial.available()){
  char input = Serial.read();
  if (input=='w'){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
    
             
}
}
