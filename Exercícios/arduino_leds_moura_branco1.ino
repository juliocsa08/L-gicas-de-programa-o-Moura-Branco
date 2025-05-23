/*Criar um protótipo com 3 leds: verde, vermelho e amarelo.
Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:
*/

 int ledVerde = 13;
 int ledAmarelo = 12;
 int ledVermelho = 11;
 int Escolhaled;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  do {
    Serial.println("Ola, Bem-vindo ao menu dos leds:");
    Serial.println("1 -  Ligar Led Verde");
    Serial.println("2 -  Desligar Led Verde");
    Serial.println("3 -  Ligar Led Amarelo");
    Serial.println("4 -  Desligar Led Amarelo");
    Serial.println("5 -  Ligar Led Vermelho");
    Serial.println("6 -  Desligar Led Vermelho");
    Serial.println("7 -  Ligar Todos os Leds");
    Serial.println("8 - Desligar Todos os Leds");
    Serial.println("0 - Sair");
    while (! Serial.available()); 
    Escolhaled = Serial.parseInt();
   
 
    switch (Escolhaled) {
      case 1:
      digitalWrite(ledVerde, HIGH);
      Serial.println("Led Verde Ligado");
      break;
      
      case 2:
      digitalWrite(ledVerde, LOW);
      Serial.println("Led Verde Desligado");
      break;
      
      case 3:
      digitalWrite(ledAmarelo, HIGH);
      Serial.println("Led Amarelo Ligado");
      break;
      
      case 4:
      digitalWrite(ledAmarelo, LOW);
      Serial.println("Led Amarelo Desligado");
      break;
      
      case 5:
      digitalWrite(ledVermelho, HIGH);
      Serial.println("Led Vermelho Ligado");
      break;
      
      case 6:
      digitalWrite(ledVermelho, LOW);
      Serial.println("Led Vermelho Desligado");
      break;
      
      case 7:
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVermelho, HIGH);
      Serial.println("Todos os Leds Ligados");
      break;
      
      case 8:
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, LOW);
      Serial.println("Todos os Leds Desligados");
      break;
      
      case 0:
      Serial.println("Saindo...");
      break;
      
      default:
      Serial.println("Ops opcao invalida");
      break;
    }
    delay(1000);
  } while (Escolhaled != 0);
}
