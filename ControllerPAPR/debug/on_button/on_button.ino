// LEDs
const int pinLedError = D8;
const int pinBattLed1 = D9;
const int pinBattLed2 = D10;
const int pinBattLed3 = D11;
const int pinBattLed4 = D12;
const int pinOn = A1;
// Buttons
const int pinPwrModeButton = D2;
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
    int state = digitaRead(pinPwrModeButton);
    delay(500); // instead of debouncing just wait 1/2 a second
          
    if (on) {
      digitalWrite(pinOn, LED_ON);  
      digitalWrite(pinLedError, LED_ON);  
    } else {
      digitalWrite(pinOn, LED_OFF);
      digitalWrite(pinLedError, LED_OFF);
    }
}   
