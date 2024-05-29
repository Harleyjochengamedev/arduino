void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);//VERMELHO
  pinMode(7, OUTPUT);//AMARELO
  pinMode(6, OUTPUT);//VERDE

}

void loop() {
  // put your main code here, to run repeatedly:
  //Começa com vermelho
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(7000); // Wait for 6000 millisecond(s)
  
  //Depois verde
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(7000); // Wait for 6000 millisecond(s)
  
  //Depois amarelo
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(3000);
}
