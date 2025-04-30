
const int pinoPeso = A0;  
const int pinoAltura = A1; 

void setup() {
  // Iniciar comunicação serial
  Serial.begin(9600);
  
  // Solicitar nome
  Serial.println("Digite o nome da pessoa:");
  while (!Serial.available()) {
    // Aguarda a entrada do nome
  }
  String nome = Serial.readStringUntil('\n');  // Lê até o final da linha

  // Solicitar peso
  Serial.println("Digite o peso da pessoa (em kg):");
  while (!Serial.available()) {
    // Aguarda a entrada do peso
  }
  float peso = Serial.parseFloat();  // Lê o peso
  
  // Solicitar altura
  Serial.println("Digite a altura da pessoa (em metros):");
  while (!Serial.available()) {
    // Aguarda a entrada da altura
  }
  float altura = Serial.parseFloat();  // Lê a altura

  // Calcular IMC
  float imc = peso / (altura * altura);

  // Imprimir o nome e IMC
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("IMC: ");
  Serial.println(imc);
}

void loop() {
  // 
}
