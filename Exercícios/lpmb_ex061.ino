// C++ code
//

float medida = 0;



void setup()
{
Serial.begin(9600);
}

void loop()
{
Serial.println("digite uma medida polegadas");
 while( ! Serial.available());
  medida = Serial.parseFloat();
  
  medida = medida * 2,54;
  
  Serial.println("Sua medida em polegadas e:" + String(medida));
  
  
  
  
  delay(1000); // Wait for 1000 millisecond(s)
}