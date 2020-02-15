void switchbouton() {
switchState = digitalRead(switchPin);
  if (switchState == HIGH) {
  Serial.println("switch high!");
  }
  else {
  Serial.println("switch low");
  }
}
