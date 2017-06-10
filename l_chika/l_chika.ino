int outputPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(outputPin, HIGH);
  delay(600);
  digitalWrite(outputPin, LOW);
  delay(500);
}
