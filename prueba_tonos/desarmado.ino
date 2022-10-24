void desarmadofn(){
  if(tonoactivado == false){
    if ((tono == false) && (ultimotonoact >= 500) && (contadortono < 1)){
    digitalWrite(2, HIGH);
    tono = false;
    ultimotonoact = currentMillis;
    }
    if ((tono == true) && (ultimotonoact >= 500) && (contadortono < 1)){
    digitalWrite(2, LOW);
    tono = true;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
  }

  
}
