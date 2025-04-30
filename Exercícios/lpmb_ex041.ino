
   String nome = "";
  float peso = 0;
float altura = 0;
float  IMC = 0;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  //entrada
  Serial.println("qual o seu nome");
          while ( ! Serial.available());
  nome = Serial.readString();
 
        Serial.println("qual o seu peso");
     while ( ! Serial.available());
  peso = Serial.parseFloat();
 
      Serial.println("qual o sua altura");
  while ( ! Serial.available());
        altura = Serial.parseFloat();
 
  //porcessamento IMC = peso / (altura * altura);
 
  //saída
      Serial.println("seu nome: " + nome);
       Serial.println("seu IMC: " + String(IMC));
 
      delay(5000);
}
