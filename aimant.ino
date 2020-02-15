float getTensionAimant(int pin)
{
    // Mesure du voltage...
    int rawValue = analogRead(pin);
    float voltage = rawValue * (5.0 / 1023) * 1000;
    float resitance = 10000 * (voltage / (5000.0 - voltage));

    // ... sortie via le moniteur serie
    Serial.print("Voltage:");
    Serial.print(voltage);
    Serial.print("mV");
    Serial.print(", Resistance:");
    Serial.print(resitance);
    Serial.println("Ohm");
    Serial.println("---------------------------------------");
    return voltage;
}
