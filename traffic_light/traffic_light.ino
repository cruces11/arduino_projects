int green = 8; //select pin 8 as green
int yellow = 4; //select pin 4 as yellow
int red = 2; //select pin 2 as red


void setup() {
  //we select our pins as output pins
 pinMode(green, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(red, OUTPUT);


}

void loop() {
  //we do a loop of changing lights
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, 150);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(1000);

}
