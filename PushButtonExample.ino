/*
 Gebruik gemaakt van example code
 http://www.arduino.cc/en/Tutorial/Button

 Gemaakt door
 Tim van den Boomen
 16-12-2016
 */

//Pins aanwijzen:
const int buttonPin1 = 2;    // button nummertje 1
const int buttonPin2 = 4;    // button nummero 2
const int ledPin1 =  13;     // Ledpin van arduino zelf
const int ledPin2 = 5;       // ledpin nummertje 1
const int ledPin3 = 6;       // ledpin numeratja 2

// variabelen voor de knop 0 & 1 geloof ik
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(9600);
  //LED pin als een output wakker schudden
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  //Button pin als een Input wakker schudden
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // status van de buttonstate lezen;
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // Checken of de button is ingedrukt
  // Als dat zo is, zet de LED op HIGH
  if (buttonState2 == HIGH) {
    //Zet LED aan:
    digitalWrite(ledPin1, HIGH);
    Serial.write(1);
    Serial.flush();
    delay(20);
  } else {
    //Zet LED uit:
    digitalWrite(ledPin1, LOW);
  }
  if (buttonState1 == HIGH) {
    //Zet LED aan:
    digitalWrite(ledPin2, HIGH);
  } else {
    //Zet LED uit:
    digitalWrite(ledPin2, LOW);
  }
  // Checken of beide buttons zijn ingedrukt
  //Als dat zo is, zet de "drop" LED aan
  if (buttonState1 == HIGH & buttonState2 == HIGH) {
    //Zet LED aan:
    digitalWrite(ledPin3, HIGH);
  } else {
    //Zet LED uit:
    digitalWrite(ledPin3, LOW);
  }
}
