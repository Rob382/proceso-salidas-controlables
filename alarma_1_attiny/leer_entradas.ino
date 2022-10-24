void leerentradas(){
byte entrada1 = digitalRead(3);
byte entrada2 = digitalRead(4);

if ((entrada1 == LOW) && ((currentMillis - ultimaentrada1) >= 100) && (sirena == false)){
  sirena = true;
  armado = false;
  desarmado = false;
  ultimaentrada1 = currentMillis;
}
if (entrada1 == HIGH){
if ((entrada2 == LOW) && ((currentMillis - ultimaentrada2) >= 100) && (armado == false)){
  armado = true;
  desarmado = false;
  sirena = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
else if((entrada2 == HIGH) && ((currentMillis - ultimaentrada2) >= 100) && (desarmado ==false)){
  armado = false;
  desarmado = true;
  sirena = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
}
}
