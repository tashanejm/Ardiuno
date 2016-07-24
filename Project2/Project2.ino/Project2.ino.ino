//Project 2

int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin,LOW);
    delay(100);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin,HIGH);
    delay(400);
    digitalWrite(ledPin,LOW);
    delay(100);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  delay(5000);
}
