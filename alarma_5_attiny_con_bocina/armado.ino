void armadofn(){
  if(sirena_activa == true){
    if(tonoactivado == false){
      if ((tono == false) && ((currentMillis - ultimotonoact) >= 1000) && (contadortono < 1)){
      if(salida4_bocina == true){
      digitalWrite(5, HIGH);  
      }
      else{
      digitalWrite(2, HIGH);
      }
      tono = true;
      ultimotonoact = currentMillis;
      tiempo_sonido = 500;
      tiempo_silencio = 500;
      }
      if ((tono == true) && ((currentMillis - ultimotonoact) >= 1500) && (contadortono < 1)){
      if(salida4_bocina == true){
      digitalWrite(5, LOW);
      }
      else{
      digitalWrite(2, LOW);
      }
      tono = false;
      contadortono = contadortono+1;
      ultimotonoact = currentMillis;
      tiempo_sonido = 500;
      tiempo_silencio = 500;
      }
    }
  }
  
digitalWrite(0, salida_1_arm);
digitalWrite(1, salida_2_arm);
if (sirena_activa == false){
  digitalWrite(2, salida_3_arm);
}
if (salida4_activa == true){
  digitalWrite(5, salida_4_arm);
}
  
}
