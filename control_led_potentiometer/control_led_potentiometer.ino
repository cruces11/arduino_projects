int value; //this variable will store the measured value from the potentiometer
int pin = 6; //PMW exit pin


void setup() {
  pinMode(pin,OUTPUT); //we declare our pin as an  output pin
}

void loop() {
  //we take an analog reading and store it in the variable value
  value = analogRead(A4);
  /* value contains a number between  0/1023 and the output needs to be between 0/255, so we must transform it. The easiest way to do so is by dividing by 4
   */
   value = value/4;
   //now we output the analog value through the PMW pin
   analogWrite(pin, value);

}
