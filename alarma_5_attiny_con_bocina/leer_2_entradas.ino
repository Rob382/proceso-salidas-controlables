void leer_2_entradas(){
byte entrada1 = digitalRead(3);
byte entrada2 = digitalRead(4);

if ((entrada1 == LOW) && ((currentMillis - ultimaentrada1) >= 100) && (alarma == false)){
  alarma = true;
  armado = false;
  desarmado = false;
  ultimaentrada1 = currentMillis;
}
if (entrada1 == HIGH){
digitalWrite(2, LOW);             //apaga la sirena (claxón)
//digitalWrite(5, LOW);             //apaga la bocina
  
if ((entrada2 == LOW) && ((currentMillis - ultimaentrada2) >= 100) && (armado == false)){
  armado = true;
  desarmado = false;
  alarma = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
else if((entrada2 == HIGH) && ((currentMillis - ultimaentrada2) >= 100) && (desarmado ==false)){
  armado = false;
  desarmado = true;
  alarma = false;
  tonoactivado = false;
  contadortono = 0;
  ultimaentrada2 = currentMillis;
}
}
}
