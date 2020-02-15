void M1_advance(char Speed) ///<Motor1 Advance
{
    digitalWrite(M1, LOW);
    analogWrite(E1, Speed);
}

void M4_advance(char Speed) ///<Motor4 Advance
{
    digitalWrite(M4, HIGH);
    analogWrite(E4, Speed);
}
void M2_advance(char Speed) ///<Motor2 Advance
{
    digitalWrite(M2, HIGH);
    analogWrite(E2, Speed);
}
void M3_advance(char Speed) ///<Motor3 Advance
{
    digitalWrite(M3, LOW);
    analogWrite(E3, Speed);
}
void M4_back(char Speed) ///<Motor4 Back off
{
    digitalWrite(M4, LOW);
    analogWrite(E4, Speed);
}
