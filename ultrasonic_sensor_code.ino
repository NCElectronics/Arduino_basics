int red = 6;
int green = 5; 
int yellow = 9; 

int echo = 2;
int trigger = 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distance = measureDistance();

  Serial.println(distance);

  if(distance < 20) {
   digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
  } else if(distance < 50) {
   digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
  } else {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
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