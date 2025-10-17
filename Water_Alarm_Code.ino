/*
 * Water Alarm 
 * Copyright (c) 2025 Your Name
 * Licensed under CC BY-NC 4.0 — you can copy, modify, and share, but not sell.
 */
void setup() {
  pinMode(2, INPUT);  
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int voda=(digitalRead(2));
  if(voda == 1)
  {
  digitalWrite(3, 1);
  tone(4, 50);
  Serial.println("WATER DETECTED");
  delay(500);
  digitalWrite(3, 0);
  tone(4, 500);
  Serial.println("WATER DETECTED");
  delay(500);
  }
  else
  {
    Serial.println("NO WATER DETECTED");
    noTone(4);
    delay(3500);
  }
}
  
