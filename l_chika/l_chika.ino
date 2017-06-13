int outputPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(outputPin, HIGH);
  delay(500);
  digitalWrite(outputPin, LOW);
  delay(500);

  // 2017/06/13　フォークしてコメント追記してみるテスト　森本
}
