int pins[] = {2, 3, 5, 4, 7, 6, 8, 9, 12, 11, 10 };

void setup() {
  //Serial.begin(9600);
  // put your setup code here, to run once:
    for(int i = 0; i < sizeof(pins)/sizeof(int); i++) {
      pinMode(pins[i], OUTPUT);
    }
  //pinMode(13,INPUT);
  }

void loop() {
  //int value = analogRead(A0);
  //Serial.println(value);
  //delay(200);
  // put your main code here, to run repeatedly:
  for(int i = 0; i < sizeof(pins)/sizeof(int); i++) {
    digitalWrite(pins[i], HIGH);
    delay(200);
    //digitalWrite(pins[i], LOW);
  }
  for(int i = sizeof(pins)/sizeof(int) -1; i >=0 ; i--) {
    digitalWrite(pins[i], LOW);
    delay(200);
    //digitalWrite(pins[i], LOW);
  }
}
