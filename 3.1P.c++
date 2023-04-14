int led = D4; 

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   

  String temp = String(random(0, 20));
  Particle.publish("temp", temp, PRIVATE);
  delay(30000);               

  digitalWrite(led, LOW);    
  delay(30000);              
}