// C++ code
//
int G = 12;
int F = 11;
int A =10;
int B = 9;
int E = 4;
int D = 3;
int C = 2;
int ponto = 1;

void setup()
{
  pinMode(12, OUTPUT);//G a do meio
  pinMode(11,OUTPUT);//F a do lado ESQUERDO em cima
  pinMode(10,OUTPUT);//A o de cima
  pinMode(9,OUTPUT);// B a do lado DIREITO em cima
  pinMode(4, OUTPUT);//E a do lado ESQUERDO em baixo
  pinMode(3,OUTPUT);// D em baixo
  pinMode(2,OUTPUT);// C a do lado DIREITO em baixo
  pinMode(1,OUTPUT);// É o ponto
}

void loop()
{
  // digitar um nove(9) desliga o E e D
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  
}