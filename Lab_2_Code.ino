
int digitalPin = 8; // define globa variables

// setup global variables
void setup(){
  pinMode(digitalPin, OUTPUT); // define digitalPin as output
}

// loop to control LEDs
void loop() {

  // loop following commands for 9 seconds
  while (millis() < 90000){

    digitalWrite(digitalPin, HIGH); // turn output high
    delayMicroseconds(1000); // delay 1000 micro seconds
    digitalWrite(digitalPin, LOW); // turn output low
    delayMicroseconds(1000); // delay 1000 micro seconds
  }
}
