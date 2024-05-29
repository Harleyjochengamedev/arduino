#define gatilho 7
#define eco 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(gatilho,OUTPUT);
  pinMode(eco,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distancia = 30;
  digitalWrite(gatilho,HIGH);
  delayMicroseconds(10);
  digitalWrite(gatilho,LOW);

  distancia = pulseIn(eco,HIGH);
  Serial.print("Distancia: ");
  Serial.println(distancia);
  delay(3000);
}