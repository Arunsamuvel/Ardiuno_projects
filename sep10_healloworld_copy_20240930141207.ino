//my first progarmming experiance 
void setup() {
  // put your setup code here, to run once:
 pinMode(7, OUTPUT);
  //initialise PIN
 pinMode(4, OUTPUT);
 pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);// high means power supply 3-5v in DC
delay(5000);
digitalWrite(7, LOW);
// ready section
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);
// green section
digitalWrite(9, HIGH);
delay(5000);
digitalWrite(9, LOW);
// ready section 
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(4, LOW);// low means powers goes to off or 0V

}
