int ReadPin = A5;
float calcVal = 0.0;

void setup() {
  pinMode(ReadPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  calcVal = (5./1023.) * (analogRead(ReadPin));
  Serial.println(calcVal);
  delay(500);
}
