void setup() {
 
 pinMode(12,OUTPUT); //define o pini 12 do arduino como saida digital 
}

void loop() {
  //play tone
  tone(12,2999,800); //esta linha de toque é usada especialmente para o buzzer
  //o seu funcionamento é: o pino, a frequencia e o tempo de duração em millissegundos
  //delay(ms)
  delay(1000);
}
