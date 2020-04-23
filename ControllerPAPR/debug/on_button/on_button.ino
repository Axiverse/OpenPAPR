// LEDs
const int pinLedError = 8;
const int pinBattLed1 = 9;
const int pinBattLed2 = 10;
const int pinBattLed3 = 11;
const int pinBattLed4 = 12;
const int pinOn = A1;
// Buttons
const int pinPwrModeButton = 2;
// Flags
const int LED_ON = 0;
const int LED_OFF = 1;

void setup() {
  // LEDs
  pinMode(pinLedError, OUTPUT);
  pinMode(pinBattLed1, OUTPUT);
  pinMode(pinBattLed2, OUTPUT);
  pinMode(pinBattLed3, OUTPUT);
  pinMode(pinBattLed4, OUTPUT);
  pinMode(pinOn, OUTPUT);
  // Turn all LEDs off
  digitalWrite(pinLedError, LED_OFF);
  digitalWrite(pinBattLed1, LED_OFF);
  digitalWrite(pinBattLed2, LED_OFF);
  digitalWrite(pinBattLed3, LED_OFF);
  digitalWrite(pinBattLed4, LED_OFF);
  digitalWrite(pinOn, LED_OFF);
  
  // Buttons
  pinMode(pinPwrModeButton, INPUT);
}

bool on = false;
void loop() {
    int state = digitalRead(pinPwrModeButton);
    delay(500); // instead of debouncing just wait 1/2 a second
          
    if (on) {
      digitalWrite(pinOn, LED_ON);  
      digitalWrite(pinLedError, LED_ON);  
    } else {
      digitalWrite(pinOn, LED_OFF);
      digitalWrite(pinLedError, LED_OFF);
    }
}   
