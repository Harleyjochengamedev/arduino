int estadoBotao = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  estadoBotao = digitalRead(3);
  if(estadoBotao == HIGH){
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(2000);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(2000);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(2000);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(2000);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(2000);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
    delay(2000);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(2000);
  }

}
 