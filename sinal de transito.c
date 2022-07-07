#define VERMELHO 10
#define AMARELO  9
#define VERDE    8
void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}
void loop() {
  digitalWrite(VERDE, HIGH);    // Acende o led verde
  digitalWrite(AMARELO, LOW);    // Apaga o led amarelo
  digitalWrite(VERMELHO, LOW);  // Apaga o led vermelho
  delay(5000);                  // Aguarda 5 segundos
  digitalWrite(VERDE, LOW);     // Apaga o led verde
  digitalWrite(AMARELO, HIGH);  // Acende o led amarelo
  digitalWrite(VERMELHO, LOW);  // Apaga o led vermelho
  delay(2000);                  // Aguarda 2 segundos
  digitalWrite(VERDE, LOW);     // Apaga o led verde
  digitalWrite(AMARELO, LOW);   // Apaga o led amarelo
  digitalWrite(VERMELHO, HIGH); // Acende o led vermelho
  delay(5000);                  // Aguarda 5 segundos
}