int led = 7;
int sensor = 2;
int piezoBuzzerPin = 4;
void setup() {
pinMode (led , OUTPUT);
pinMode (sensor,INPUT); 
delay(5000);
}
void loop() {
int sensorstatus = digitalRead(sensor);
if (sensorstatus == HIGH ){
  digitalWrite(led, HIGH);
  analogWrite(piezoBuzzerPin, 200);
  delay(100);
  digitalWrite(led, LOW);
  analogWrite(piezoBuzzerPin, 25);
  delay(100);
}
digitalWrite(led, LOW);
digitalWrite(piezoBuzzerPin,LOW);
}
