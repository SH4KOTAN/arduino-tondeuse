void aimant2()
{      
        // Mesure du voltage...
    int rawValue2 = analogRead(sensorPin2);
        float voltage2 = rawValue2 * (5.0/1023) * 1000;
         
        float resitance2 = 10000 * ( voltage2 / ( 5000.0 - voltage2) );
         
    // ... sortie via le moniteur serie
    Serial.print("Voltage2:");   Serial.print(voltage2); Serial.print("mV");
    Serial.print(", Resistance:"); Serial.print(resitance2); Serial.println("Ohm");
    Serial.println("---------------------------------------");
    return voltage}
