
/*Elabore um programa para cálculo de preços
de produtos que solicite o preço de compra do
produto e o percentual a ser aplicado em cima 
desse valor para a venda. Calcule e exiba o 
preço de venda do produto. Se o percentual a 
ser aplicado for inferior a 50%, exiba uma 
mensagem informando ao usuário que o produto 
será vendido com uma margem muito pequena de lucro.*/
//Variaveis
float preco, percentual, lucro;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //entrada
  Serial.println("Qual o preco de compra do produto?");
  while(! Serial.available());
  preco = Serial.parseInt();
  
  Serial.println("Certo. Agora, qual o percentual a ser aplicado nesse produto para vender?");
  while(! Serial.available());
  percentual = Serial.parseInt();
  
  //processamento
  
  if(percentual<50){
    lucro = preco * (1+ percentual/100);
    Serial.println("Margem de lucro muito pequena!");
   }
  
  
  //saida
  
  Serial.println("Valor do produto para venda: " + String(lucro));
  Serial.println();
}