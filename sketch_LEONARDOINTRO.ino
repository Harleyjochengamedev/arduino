void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  Serial.println("Porta Extra L Aceso");
  delay(5000);

  digitalWrite(13,LOW);
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  Serial.println("Porta Extra RX Aceso");
  delay(5000);
  
  digitalWrite(13,LOW);
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  Serial.println("Porta Extra TX Aceso");
  delay(5000);
}
