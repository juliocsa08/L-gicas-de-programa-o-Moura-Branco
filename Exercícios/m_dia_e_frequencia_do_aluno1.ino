// C++ code
//Some todas as notas e divida pelo numero total de notas 
//utilizei alguns codigos da atividade anterios porque tinha esquecido]

int nota = 6;
int frequencia = 75;

void setup()
{

  Serial.begin(9600);

  Serial.println("Exibicao nota final");
  while( ! Serial.available());
  nota = Serial.parseInt();


  Serial.println("Sua Frequencia " + String(nota));

  if(nota >=6 && frequencia >=75){
    Serial.println("Parabens voce foi aprovado");
  } else if(nota <=6 && frequencia <75){
    Serial.println("Infelizmente Voce nao foi aprovado");
  }   if(nota >= 10 && frequencia >= 100);{
    Serial.println("Parabéns! Nota máxima!");  
  }  

  Serial.println("Exibicao frequencia final");
  while( ! Serial.available());
  frequencia = Serial.parseInt();


  if(frequencia >=75){
    Serial.println("Parabens Sua frequencia foi aprovada!");
  } else if(frequencia <75){
    Serial.println("Frequencia muito baixa Reprovado por frequencia!");
  }  

  
  if(nota >= 10 && frequencia >= 100);{
    Serial.println("Parabéns! Nota máxima!");

}  

}



void loop()
{

  delay(1000); 
}