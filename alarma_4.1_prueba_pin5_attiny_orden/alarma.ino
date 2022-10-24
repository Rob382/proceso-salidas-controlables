void alarmafn(){
if(sirena_activa == true){
  if(tonoactivado == false){

    if ((tono == false) && ((currentMillis - ultimotonoact) >= tiempo_silencio) && (desarmado == false)){
    digitalWrite(2, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(5, HIGH);
    tono = true;
    ultimotonoact = currentMillis;
    }
    if ((tono == true) && ((currentMillis - ultimotonoact) >= tiempo_sonido) && (desarmado == false)){
    digitalWrite(2, LOW);
    digitalWrite(0, LOW);
    digitalWrite(5, LOW);
    tono = false;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
    if (desarmado == true){
      digitalWrite(2, LOW);
      digitalWrite(0, LOW);
      digitalWrite(5, LOW);
    }

    if(contadortono >= 3){
      tiempo_silencio = 1000;
    }
    if(contadortono >= 4){
      tiempo_silencio = 500;
    }    
    if(contadortono >= 6){
      tiempo_sonido = 1000;
      if (contadortono >= 9){
        contadortono = 0;
        tiempo_sonido =500;
      }
    }
  }
}
  if (notif_activo == false){
  digitalWrite(0, salida_1_alrm);
  }
  
  digitalWrite(1, salida_2_alrm);
  
  if (sirena_activa == false){
    digitalWrite(2, salida_3_alrm);
  }
  if (salida4_activa == true){
    digitalWrite(5, salida_4_alrm);
  }
}
