void moteurbras() {
if (switchState == HIGH){
 // analogWrite(M1PWM, vitesse);
  //vitesse += 50;
  //if (vitesse > 255)
  //  vitesse = 255;
  //Serial.print("vistesse sur 255 :");
 // Serial.println(vitesse);
M4_advance(200);}
  else
  {
    //phase de décélération
   // analogWrite(M1PWM, vitesse);
   // vitesse = 0;
    //Serial.print("vistesse sur 255 :");
    //Serial.println(vitesse);
    M4_back(200);
  }
}
