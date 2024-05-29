#define tempo1 2000
#define tempo2 3000
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write("A");
  delay(tempo1);
  Serial.write("a");
  delay(tempo2);
  if(Serial.available()>0){
    char caractere = Serial.read();
    Serial.println(caractere);
    delay(tempo2);
  }
}
