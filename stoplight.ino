int red = 2;
int yellow = 3;
int green = 4; 
int button = 5;
int echo = 11;
int trigger = 12;
int buzzer = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(green, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distance = measureDistance();

  if(distance < 50) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    tone(buzzer, 1000);
  } else if(distance < 100) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    tone(buzzer, 100);
  } else {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    noTone(buzzer);
  }
}

void resetLights() {
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
}

void change() {
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(500);
}

int measureDistance() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  return pulseIn(echo, HIGH) / 58;
}