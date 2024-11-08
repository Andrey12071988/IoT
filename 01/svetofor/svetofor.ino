int green = 13;
int stat = 0
void setup() {
  Serial.begin(9600);
  digitalWrite(green, LOW);
}

void loop() {
  if (Serial.available() > 0){
    stat = Serial.read();
  }
  if (stat == 0){
    digitalWrite(green, LOW);
  }
  else if (stat == 1){
    digitalWrite(green, HIGH);
  }
  
}
