void sirenafn(){
  if(tonoactivado == false){

    if ((tono == false) && ((currentMillis - ultimotonoact) >= tiempo_silencio) && (desarmado == false)){
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);
    tono = true;
    ultimotonoact = currentMillis;
    }
    if ((tono == true) && ((currentMillis - ultimotonoact) >= tiempo_sonido) && (desarmado == false)){
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    tono = false;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
    if (desarmado == true){
      digitalWrite(1, LOW);
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

  digitalWrite(2, LOW);
}
