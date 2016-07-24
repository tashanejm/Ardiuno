//Project 3

int ledRed =10, ledYellow = 9, ledGreen = 8;
const int DELAY = 10000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRed, HIGH);
  delay(DELAY);
  digitalWrite(ledYellow, HIGH);
  delay(2000);
  
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  delay(DELAY);

  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(DELAY);

  digitalWrite(ledYellow, LOW);
}
