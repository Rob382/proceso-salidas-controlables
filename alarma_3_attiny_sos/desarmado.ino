void desarmadofn(){
if(tonoactivado == false){
    if ((tono == false) && ((currentMillis - ultimotonoact) >= 250) && (contadortono < 3)){
    digitalWrite(1, HIGH);
    tono = true;
    ultimotonoact = currentMillis;
    tiempo_sonido = 500;
    tiempo_silencio = 500;
    
    }
    if ((tono == true) && ((currentMillis - ultimotonoact) >= 250) && (contadortono < 3)){
    digitalWrite(1, LOW);
    tono = false;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
  }
digitalWrite(2, HIGH);
digitalWrite(0, HIGH);

  
}
