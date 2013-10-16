int button = 13;

void setup() {
  Serial.begin(9600); 
  pinMode(button, INPUT);  
}

void loop() {
  int input = digitalRead(button);
  Serial.print(input);  
  delay(500);
}

