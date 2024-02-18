void setup() {
  // put your setup code here, to run once:
pinmode(8,output);//vermelho
pinmode(7;output);//amarelho
pinmode(6;output);//verde
}

void loop() {
  // put your main code here, to run repeatedly:
//começa com vermelho
digitalwrite(8,high);
digitalwrite(7,low);
digitalwrite(6,low);
delay(7000);//wait for 6000 millisecond(s)
//depois verde
digitalwrite(8;low);
digitalwrite(7;low);
digitalwrite(6;high);
delay(7000);//wait for 6000 millisecond(s)
//depois amarelo
digitalwrite(8;low);
digitalwrite(7,high);
digitalwrite(6,low);
delay(3000);
}
