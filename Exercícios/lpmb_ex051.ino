float centimetros;
float polegadas;

void setup() {
  Serial.begin(9600); 
  Serial.println("Digite a medida em centímetros:");
}

void loop() {
  if (Serial.available() > 0) {
    centimetros = Serial.parseFloat(); 
    polegadas = centimetros / 2.54;    

    Serial.print("Medida em polegadas: ");
    Serial.println(polegadas);

    Serial.println("Digite outra medida em centímetros:");
  }
}
