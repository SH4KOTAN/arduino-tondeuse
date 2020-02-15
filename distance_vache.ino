int distance(int pin)
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  lecture_echo = pulseIn(echo, HIGH);
  cm = lecture_echo / 58;

  delay(10);
  Serial.print("Distance en cm :");
  Serial.println(cm);
}

int distance1()
{
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  lecture_echo1 = pulseIn(echo1, HIGH);
  cm1 = lecture_echo1 / 58;

  delay(10);
  Serial.print("Distance en cm1 :");
  Serial.println(cm1);
}

//int distance2 (){
//digitalWrite(trig2, HIGH);
//delayMicroseconds(10);
//digitalWrite(trig2, LOW);
//lecture_echo2 = pulseIn(echo2,HIGH);
//cm2 = lecture_echo2 /58;
//Serial.print("Distance2 en cm :");
//Serial.println(cm2);
//delay(1000);
//Serial.print("Distance en cm 2:");
//Serial.println(cm2);
//}
