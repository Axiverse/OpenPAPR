// Assign the pins
const int pinLedError = D8;
const int pinBattLed1 = D9;
const int pinBattLed2 = D10;
const int pinBattLed3 = D11;
const int pinBattLed4 = D12;

void setup() {
  pinMode(pinLedError, OUTPUT);
  pinMode(pinBattLed1, OUTPUT);
  pinMode(pinBattLed2, OUTPUT);
  pinMode(pinBattLed3, OUTPUT);
  pinMode(pinBattLed4, OUTPUT);
}

int on = 0;
void loop() {
  if (on == 0) {
    on = 1;
  } else {
    on = 0;
  }
  digitalWrite(pinLedError, on);
  digitalWrite(pinBattLed1, on);
  digitalWrite(pinBattLed2, on);
  digitalWrite(pinBattLed3, on);
  digitalWrite(pinBattLed4, on);
  delay(500);
}   
