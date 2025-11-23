// we define the analog pin we are going to usde as a constant
  const int analogPin = A4;
  int value; //variable used to store the brute analog reading
  int position; //variable used to store the value in %
  


void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(analogPin); //we do our brute value reading
  position = map(value, 0, 1023, 0, 100); //we use the map function to transform value to a percentaje

  Serial.println(position); //we print the percentaje

  delay(500);

}
