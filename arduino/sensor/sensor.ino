int sensor = A0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int sensorValue = analogRead(sensor);
  Serial.write(sensorValue/4);  
  delay(50);
}
