void moteurdroite(float tensionAimantGauche, float tensionAimantDroit) {

  if ((cm < 20) or (cm1 < 20) or (switchState == HIGH) or (2600>tensionAimantDroit>2400)) { //  ou aimant1  or (2600>voltage>2400)
    // analogWrite(M1PWM, vitesse);
    //vitesse += 50;
    //if (vitesse > 255)
    //  vitesse = 255;
    //Serial.print("vistesse sur 255 :");
    // Serial.println(vitesse);
    M3_advance(0);
  }
  else
  {
    //phase de décélération
    // analogWrite(M1PWM, vitesse);
    // vitesse = 0;
    //Serial.print("vistesse sur 255 :");
    //Serial.println(vitesse);
    M3_advance(200);
  }
}
