void armadofn(){
  if(tonoactivado == false){
    if ((tono == false) && ((currentMillis - ultimotonoact) >= 1000) && (contadortono < 1)){
    digitalWrite(1, HIGH);
    tono = true;
    ultimotonoact = currentMillis;
    }
    if ((tono == true) && ((currentMillis - ultimotonoact) >= 1000) && (contadortono < 1)){
    digitalWrite(1, LOW);
    tono = false;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
  }
  
digitalWrite(2, LOW);
digitalWrite(0, LOW);
  
}
