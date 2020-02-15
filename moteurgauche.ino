void moteurgauche()
{
  if ((cm < 20) or (cm1 < 20) or (switchState == HIGH))
  { //ou aimant2         or (2600>voltage2>2400)
    // analogWrite(M1PWM, vitesse);
    //vitesse += 50;
    //if (vitesse > 255)
    //  vitesse = 255;
    //Serial.print("vistesse sur 255 :");
    // Serial.println(vitesse);
    M2_advance(0);
  }
  else
  {
    //phase de décélération
    // analogWrite(M1PWM, vitesse);
    // vitesse = 0;
    //Serial.print("vistesse sur 255 :");
    //Serial.println(vitesse);
    M2_advance(200);
  }
}
