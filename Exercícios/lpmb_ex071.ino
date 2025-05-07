// C++ code
//
String nome = "";
String cargo = "";
float salario = 0.0;
float novosalario = 0.0;

void setup() {
  Serial.begin(9600);
   {
    ; // 
  }

  Serial.println("Digite o nome do funcionario:");
  while (nome.length() == 0) {
    if (Serial.available()) {
      nome = Serial.readStringUntil('\n');
      nome.trim();
    }
  }

  Serial.println("Digite o cargo do funcionario:");
  while (cargo.length() == 0) {
    if (Serial.available()) {
      cargo = Serial.readStringUntil('\n');
      cargo.trim();
    }
  }

  Serial.println("Digite o salario do funcionario:");
  while (salario == 0.0) {
    if (Serial.available()) {
      salario = Serial.parseFloat();
    }
  }

  novosalario = salario * 1.10;

  Serial.println("\n--- Dados do Funcionario ---");
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Cargo: ");
  Serial.println(cargo);
  Serial.print("Novo salario (10% de aumento): R$ ");
  Serial.println(novosalario, 2);
}

void loop() {
  // 
}
