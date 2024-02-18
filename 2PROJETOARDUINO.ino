int estadobotao = 0
void setup(){
  // put your setup code here, to run once:
  pinmode(10,OUTPUT)
  pinmode(9,OUTPUT)
  pinmode(8,OUTPUT)
  pinmode(7,OUTPUT)
  pinmode(3,INPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalwrite(10,HIGH);
  digitalwrite(9,HIGH);
  digitalwrite(8,HIGH);
  digitalwrite(7,high);
  ESTADOBOTAO = digitalread(3);
  if(estadobotao == high){
    digitalwrite(10,LOW);
    digitalwrite(9,HIGH);
    digitalwrite(8,HIGH);
    digitalwrite(7,HIGH);
    delay(2000);
    digitalwrite(10,LOW);
    digitalwrite(9,LOW);
    digitalwrite(8,HIGH);
    digitalwrite(7,high);
    delay(2000);
    digitalwrite(10,LOW);
    digitalwrite(9,LOW);
    digitalwrite(8,LOW);
    digitalwrite(7,LOW);
    delay(2000);
    digitalwrite(10,HIGH);
    digitalwrite(9,LOW);
    digitalwrite(8,LOW);
    digitalwrite(7,LOW);
    delay(2000);
    digitalwrite(10,HIGH);
    digitalwrite(9,HIGH);
    digitalwrite(8,LOW);
    digitalwrite(7,LOW);
    delay(2000);
    digitalwrite(10,HIGH);
    digitalwrite(9,HIGH);
    digitalwrite(8,HIGH);
    digitalwrite(7,LOW);  
    delay(2000);
    digitalwrite(10,HIGH);
    digitalwrite(9,HIGH);
    digitalwrite(8,HIGH);
    digitalwrite(7,high);
    delay(2000);
 }

}