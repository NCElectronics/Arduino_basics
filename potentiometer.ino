int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;
int D5 = 6;

int potent = A0;
int potentNum = 0;

void setup() {

  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);

  Serial.begin(9600);
  pinMode(potent, INPUT);
}
void loop() {
  
  potentNum = analogRead(potent);
  int num = map(potentNum, 0, 1023, 0, 4);

  Serial.println(potentNum);
  switch (num) {
    case 0:
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      digitalWrite(D5, LOW);
      break;
    case 1:
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      digitalWrite(D5, LOW);
      break;
    case 2:
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      digitalWrite(D4, LOW);
      digitalWrite(D5, LOW);
      break;
    case 3:
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, HIGH);
      digitalWrite(D5, LOW);
      break;
    case 4:
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      digitalWrite(D5, HIGH);
      break;
  }
  delay(50);
}