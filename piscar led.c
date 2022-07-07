/*1 Placa arduino uno
1 LED 5mm
1 Resistor 1k – marrom, preto, vermelho
2 Fios jumper
1 Protoboard
1 Cabo USB para o arduino*/

// nesse exemplo =  porta 13 e GND


void setup(){
  pinMode(13,OUTPUT); 
}

void loop(){
    digitalWrite(13, HIGH);
    delay(10);
    digitalWrite(13, LOW);
    delay(250);
}
