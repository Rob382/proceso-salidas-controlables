void sirenafn(){
  if(tonoactivado == false){
    if ((tono == false) && ((currentMillis - ultimotonoact) >= 500) && (desarmado == false)){
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);
    tono = true;
    ultimotonoact = currentMillis;
    }
    if ((tono == true) && ((currentMillis - ultimotonoact) >= 500) && (desarmado == false)){
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    tono = false;
    contadortono = contadortono+1;
    ultimotonoact = currentMillis;
    }
    if (desarmado == true){
      digitalWrite(1, LOW);
    }
  }
  digitalWrite(2, LOW);
}
