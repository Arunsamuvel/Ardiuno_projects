// variables intialize
int redPin= A4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH); 
  analogWrite(redPin, 255);
}
