int Green_pin = 12;
int Yellow_pin = 8;
int Red_pin = 4;
int button = 2;

int is_pressed = 0;  // start at red

void setup() {
  pinMode(Green_pin, OUTPUT);
  pinMode(Yellow_pin, OUTPUT);
  pinMode(Red_pin, OUTPUT);

  pinMode(button, INPUT_PULLUP);  // correct pull-up
}

void loop() {

  // Button pressed? (LOW because of INPUT_PULLUP)
  if (!digitalRead(button)) {
    is_pressed = 1;  // set to green/start the sequence
  }

  // Call the light-control function
  switch (is_pressed) {
    case 0:  // red for 2000ms
      showLight(Red_pin, 5000);
      break;

    case 1:  // green for 2000ms
      showLight(Green_pin, 2000);
      break;

    case 2:  // yellow for 2000ms
      showLight(Yellow_pin, 2000);
      break;
  }
}

// Handles timing & switching LEDs
void showLight(int ledPin, int maxTime) {
  static int lastPin = 0;
  static unsigned long startTime = 0;

  if (ledPin != lastPin) {
    startTime = millis();
    digitalWrite(lastPin, LOW);   // turn off previous LED
    lastPin = ledPin;
    digitalWrite(ledPin, HIGH);   // turn on new LED
  }

  unsigned long elapsedTime = millis() - startTime;

  if (elapsedTime > maxTime) {
    is_pressed++;
    if (is_pressed > 2) {
      is_pressed = 0;
    }
  }
}
