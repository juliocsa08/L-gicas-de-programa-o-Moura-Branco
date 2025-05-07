//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//declaração de Variáveis
int idade = 0;
int idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;
 
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite sua idade em anos");
  while( !Serial.available() );// espere o usuário dar <Enter>
  idade = Serial.parseInt();// tranforma a idade digitada em número
 
 
 //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
 
 //Saída
  Serial.println("Idade em meses: " + String(idadeMeses));//imprime o texto
  Serial.println("Idade em dias: " + String(idadeDias));
  Serial.println("Idade em horas: " + String(idadeHoras));
  Serial.println("Idade em minutos: " + String(idadeMinutos));
 
  delay(1000);
}