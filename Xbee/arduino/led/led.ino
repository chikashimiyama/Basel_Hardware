int led = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(led, OUTPUT);     
}

void loop() {
  int input;
  if (Serial.available() > 0) {
      input = Serial.read();
      if(input > 50){
        digitalWrite(led, HIGH);
      }else{
        digitalWrite(led, LOW);
      }
  }
}

