int button = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(button, INPUT);  
}

void loop() {
  int input = digitalRead(button);
  Serial.write(input);  
  delay(5);
}

