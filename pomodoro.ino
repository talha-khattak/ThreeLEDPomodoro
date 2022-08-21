const int ledGreen = 13;
const int ledWhite = 7;
const int ledYellow = 5;
int n = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledYellow, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledGreen, HIGH);
  delay(1500000);
  digitalWrite(ledGreen, LOW);
  for (int i = 1; i < 4; i++) { 
    digitalWrite(ledWhite, HIGH);
    delay(100);
    digitalWrite(ledWhite, LOW);
    delay(100);
  }
  digitalWrite(ledYellow, HIGH);
  delay(300000);
  digitalWrite(ledYellow, LOW);
}

