
 int pinoPeso = 0;  
int pinoAltura = 1; 

void setup() {
 
  Serial.begin(9600);
  

  Serial.println("Digite o nome da pessoa:");
  while (!Serial.available()) {
    
  }
  String nome = Serial.readStringUntil('');  

  Serial.println("Digite o peso da pessoa (em kg):");
  while (!Serial.available()) {

  }
  float peso = Serial.parseFloat();  
  
  
  Serial.println("Digite a altura da pessoa (em metros):");
  while (!Serial.available()) {

  }
  float altura = Serial.parseFloat();

  float imc = peso / (altura * altura);

  
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("IMC: ");
  Serial.println(imc);
}

void loop() {

}
