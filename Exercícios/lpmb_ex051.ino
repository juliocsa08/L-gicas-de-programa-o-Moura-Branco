float centimetros;
float polegadas;

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  Serial.println("Digite a medida em centímetros:");
}

void loop() {
  if (Serial.available() > 0) {
    centimetros = Serial.parseFloat(); // Lê o número digitado
    polegadas = centimetros / 2.54;    // Converter para polegadas

    Serial.print("Medida em polegadas: ");
    Serial.println(polegadas);

    Serial.println("Digite outra medida em centímetros:");
  }
}
