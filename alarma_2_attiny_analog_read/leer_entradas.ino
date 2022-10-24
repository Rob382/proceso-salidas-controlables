void leerentradas(){
int entrada1 = analogRead(A3);
int entrada2 = analogRead(A2);

if ((entrada1 >= 250) && ((currentMillis - ultimaentrada1) >= 100) && (sirena == false)){
  sirena = true;
  armado = false;
  desarmado = false;
  ultimaentrada1 = currentMillis;
}
if (entrada1 <= 100){
if ((entrada2 >= 250) && ((currentMillis - ultimaentrada2) >= 100) && (armado == false)){
  armado = true;
  desarmado = false;
  sirena = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
else if((entrada2 <= 100) && ((currentMillis - ultimaentrada2) >= 100) && (desarmado ==false)){
  armado = false;
  desarmado = true;
  sirena = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
}
}
