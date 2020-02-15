
int trig = 15;
int echo = 14;
int trig1 = 16;
int echo1 = 17;
int echo2 = 18;
int trig2 = 19;
long lecture_echo;
long lecture_echo1;
long lecture_echo2;
long cm;
long cm1;
long cm2;

int pinAimantDroit = A5; // pin analogique aimant
//int sensorValue = 0;   // variable to store the value coming from the sensor

int pinAimantGauche = A4; // pin analogique aimant
//int sensorValue2 = 0;   // variable to store the value coming from the sensor

int M1DIR = 4;   // direction du moteur 1= broche 4
int M1PWM = 5;   // commande PWM du moteur 1= broche 5
int vitesse = 0; //rapport cyclique entre 0 et 255

int M2DIR = 7;    // direction du moteur 2= broche 6
int M2PWM = 6;    // commande PWM du moteur 2= broche 7
int vitesse2 = 0; //rapport cyclique entre 0 et 255

const int switchPin = 2;
int switchState = 0;

const int E1 = 3;  ///<Motor1 Speed
const int E2 = 11; ///<Motor2 Speed pas use
const int E3 = 5;  ///<Motor3 Speed pas use
const int E4 = 6;  ///<Motor4 Speed

const int M1 = 4;  ///<Motor1 Direction
const int M2 = 12; ///<Motor2 Direction pas use
const int M3 = 8;  ///<Motor3 Direction pas use
const int M4 = 7;  ///<Motor4 Direction

void setup()
{
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT);

  pinMode(trig1, OUTPUT);
  digitalWrite(trig1, LOW);
  pinMode(echo1, INPUT);

  pinMode(trig2, OUTPUT);
  digitalWrite(trig2, LOW);
  pinMode(echo2, INPUT);
  Serial.begin(9600); // initialise le port série

  pinMode(M1DIR, OUTPUT);
  pinMode(M1PWM, OUTPUT);

  pinMode(M2DIR, OUTPUT);
  pinMode(M2PWM, OUTPUT);

  pinMode(switchPin, INPUT);

  for (int i = 3; i < 9; i++)
    pinMode(i, OUTPUT);
  for (int i = 11; i < 13; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  // # mathys
  distance();
  distance1();
  //distance2 ();
  switchbouton();
  moteurbras();
  moteurlame();

  // calcule tension aimants
  //float tensionGauche = getTensionAimant(pinAimantGauche);
  float tensionDroite = getTensionAimant(pinAimantDroit);

  //
  moteurgauche();
  moteurdroite(0, tensionDroite);
}
