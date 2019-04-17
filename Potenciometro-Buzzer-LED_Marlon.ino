const int buzzer = 11;
const int led = 9;
const int pot = A0;
int leitura = 0;
int pwm = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  leitura = analogRead(pot);

  pwm = map(leitura, 0, 1023, 0 , 255);

  analogWrite(buzzer, pwm);
  analogWrite(led, pwm);

}
