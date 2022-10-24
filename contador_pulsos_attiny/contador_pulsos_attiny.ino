byte contador = 0;
byte contador2 = 0;
unsigned long currentMillis = 0;
unsigned long lastentrada1 = 0;
unsigned long lastentrada2 = 0;
void setup() {
  // put your setup code here, to run once:
pinMode (1, INPUT);
pinMode (2, INPUT);
pinMode (0, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
currentMillis = millis();
byte entrada1 = digitalRead(1);
byte entrada2 = digitalRead(2);

if ((entrada1 == LOW) && ((currentMillis - lastentrada1) >= 500)){
  contador = contador+1;
  lastentrada1 = currentMillis;
}
if ((entrada2 == LOW) && ((currentMillis - lastentrada2) >= 500)){
  contador = 0;
  contador2 = 0;
  lastentrada2 = currentMillis;
}

if (contador == 1 && contador2 == 0){
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  contador2 = 1;
}
if (contador == 2 && contador2 == 1){
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  delay(500);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  contador2 = 2;
}
if (contador == 3 && contador2 == 2){
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  delay(500);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  delay(500);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  contador2 = 3;
}
if (contador == 4 && contador2 == 3){
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  contador2 = 4;
}
}
