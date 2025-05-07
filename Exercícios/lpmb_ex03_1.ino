void setup() {
  // Iniciar comunicação serial
  Serial.begin(9600);
  
  // Solicitar que o usuário insira um número
  Serial.println("Digite um numero para calcular o seu dobro:");
}

void loop() {
  // Verificar se há dados disponíveis no serial
  if (Serial.available() > 0) {
    // Ler o número enviado pelo usuário
    int numero = Serial.parseInt();
    
    // Calcular o dobro do número
    int dobro = numero * 2;
    
    // Exibir o dobro no monitor serial
    Serial.print("O dobro de ");
    Serial.print(numero);
    Serial.print(" é: ");
    Serial.println(dobro);
    
    // Aguarda um pequeno tempo antes de permitir outra leitura
    delay(1000);  // Delay de 1 segundo
  }
}
