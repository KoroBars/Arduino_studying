const int RED_LED_PIN = 3;
const int YELLOW_LED_PIN = 6;
const int GREEN_LED_PIN = 5;

void set_lights(bool red_enabled, bool yellow_enabled, bool green_enabled) {
  digitalWrite(RED_LED_PIN, red_enabled);
  digitalWrite(YELLOW_LED_PIN, yellow_enabled);
  digitalWrite(GREEN_LED_PIN, green_enabled);
} 

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  set_lights(true, false, false);
  delay(20 * 1000);

  set_lights(false, false, true);
  delay(30 * 1000);
  
  for (int i = 0; i < 3; i++) {
    set_lights(false, false, false);
    delay(600);
    set_lights(false, false, true);
    delay(600);
  }

  set_lights(false, true, false);
  delay(3 * 1000);
}
