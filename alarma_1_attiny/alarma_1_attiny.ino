//D5 = relay 3 
//D2 = relay 2
//D1 = relay 1 
//D0 = relay 0
//D3 = ¡in 1
//D4 = !in 2

byte armado = false;
byte desarmado = false;
byte sirena = false;
unsigned long currentMillis = 0;
unsigned long ultimaentrada1 = 0;
unsigned long ultimaentrada2 = 0;
byte tonoactivado = false;
byte tono = false;
unsigned long ultimotonoact;
byte contadortono = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (3, INPUT);
pinMode (4, INPUT);
pinMode (0, OUTPUT);
pinMode (1, OUTPUT);
pinMode (2, OUTPUT);
pinMode (5, OUTPUT);

delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
currentMillis = millis();
leerentradas();
if (armado == true){
  armadofn();
}
if (desarmado == true){
  desarmadofn();
}
if (sirena == true){
  sirenafn();
}

}
