  void moteurlame() {
    
if ((cm < 20) or (cm1 < 20) or (switchState == HIGH)){
 // analogWrite(M2PWM, vitesse2);
  //vitesse2 += 50;
  //if (vitesse2 > 255)
 //   vitesse2 = 255;
 // Serial.print("vistesse2 sur 255 :");
//  Serial.println(vitesse2);
M1_advance(0);}

  else
  {
    //phase de décélération
    //analogWrite(M2PWM, vitesse2);
    //vitesse2 = 0;
    //Serial.print("vistesse2 sur 255 :");
    //Serial.println(vitesse2);
    M1_advance(200);
  }
}
   
  
