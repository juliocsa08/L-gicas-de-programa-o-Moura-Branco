/*Um programa que receba o nome, cargo e salário de um funcionário.
Se o funcionário ganhar abaixo de 1000 reais, calcule o salário
acrescido de 10%. Ao final exiba o nome, o cargo e o salário 
desse funcionário.*/

//Váriaveis
float salario, salario2;
String nome, cargo;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Qual seu nome?");
  while(!Serial.available());
  nome = Serial.readString();
  
   Serial.println("Muito bem, e qual o seu cargo?");
  while(!Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Certinho, agora, qual o seu salario?");
  while(!Serial.available());
  salario = Serial.parseInt();
  
  //processamento
                    //calcular o aumento
  if(salario<1000){ 
    salario = salario + (salario *0.10);
  }
  
  //saida
  
   Serial.println("Nome: " + nome);
   Serial.println("Cargo: " + cargo);
   Serial.println("Salario: " + String(salario));
   Serial.println();
  
  delay(2000);
}
