void desarmadofn(){
if(sirena_activa == true){
  if(tonoactivado == false){
      if ((tono == false) && ((currentMillis - ultimotonoact) >= 250) && (contadortono < 3)){
      digitalWrite(2, HIGH);
      tono = true;
      ultimotonoact = currentMillis;
      tiempo_sonido = 500;
      tiempo_silencio = 500;
      
      }
      if ((tono == true) && ((currentMillis - ultimotonoact) >= 250) && (contadortono < 3)){
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      tono = false;
      contadortono = contadortono+1;
      ultimotonoact = currentMillis;
      }
    }
}
digitalWrite(0, salida_1_dis);
digitalWrite(1, salida_2_dis);
if (sirena_activa == false){
  digitalWrite(2, salida_3_dis);
}
if (salida4_activa == true){
  digitalWrite(5, salida_4_dis);
}

  
}
