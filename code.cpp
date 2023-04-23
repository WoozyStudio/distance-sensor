#define echoPin 7
#define trigPin 8
long tiempo, distancia;
void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  tiempo=pulseIn(echoPin,HIGH);
  distancia=tiempo*0.01715;
  Serial.println(distancia);
  delay(200);
}