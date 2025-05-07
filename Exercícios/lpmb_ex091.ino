/*Uma empresa decide dar aumento de 30% aos funcionários 
cujo salário é inferior a 500 reais. Escreva um programa que 
receba o salário de um funcionário e imprima o valor do salário 
reajustado ou uma mensagem caso o funcionário não tenha direito 
a aumento.*/
//Variaveis
float salario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Qual o seu salario?");
  while(!Serial.available ());
  salario = Serial.parseInt ();
  
  if(salario<500){
  salario = salario * 1.30;
  Serial.println("Oba! Seu salario agora eh " + String(salario));
  }else{
  Serial.println("Voce nao tem direito a aumento de salario");
  }
  
  Serial.println();
  delay(2000);
}