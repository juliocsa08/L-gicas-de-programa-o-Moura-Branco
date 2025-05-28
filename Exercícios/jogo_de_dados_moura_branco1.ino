#include <Servo.h>


 int ledVermelho = 2;
 int ledVerde = 3;
 int ledsAzuis[] = {4, 5, 6};
 int numeroJoias = 3;

Servo servo;
 int pinServo = 9;

int acertos = 0;
int numeroSagrado;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0)); 

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  for (int i = 0; i < numeroJoias; i++) {
    pinMode(ledsAzuis[i], OUTPUT);
    digitalWrite(ledsAzuis[i], LOW);
  }

  servo.attach(pinServo);
  servo.write(0); 
  Serial.println("    ");
  Serial.println("        BEM-VINDO A FORTALEZA SAGRADA!        ");
  Serial.println("    ");
  iniciarNovaRodada();
}

void loop() {
  if (Serial.available() > 0) {
    int palpite = Serial.parseInt();

    if (palpite < 1 || palpite > 6) {
      Serial.println("Digite um numero de 1 a 6.");
      return;
    }

    if (palpite == numeroSagrado) {
      Serial.println(" Voce acertou o numero sagrado!");
      piscarLED(ledVerde);

      if (acertos < numeroJoias) {
        digitalWrite(ledsAzuis[acertos], HIGH); 
        acertos++;
      }

      if (acertos >= numeroJoias) {
        Serial.println(" Todas as joias estão acesas! A Porta da Sabedoria se abre...");
        servo.write(90); 
      } else {
        iniciarNovaRodada();
      }
    } else {
      Serial.print(" Voce errou. O numero era ");
      Serial.println(numeroSagrado);
      piscarLED(ledVermelho);
      reiniciarDesafio();
    }
  }
}

void iniciarNovaRodada() {
  numeroSagrado = random(1, 7);
  Serial.println("Tente adivinhar o numero sagrado (1 a 6):");
}

void reiniciarDesafio() {
  acertos = 0;
  for (int i = 0; i < numeroJoias; i++) {
    digitalWrite(ledsAzuis[i], LOW); 
  }
  servo.write(0); 
  iniciarNovaRodada();
}

void piscarLED(int pin) {
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
}
