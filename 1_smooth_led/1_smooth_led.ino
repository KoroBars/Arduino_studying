#define OUTPUT_LED_PIN 5

void smooth_change(int pin, int start, int end, int delay_ms) {
  /*
  Плавно изменяет значение на pin на отрезке [start; end], используя задержку delay.
  */
  int v = start; 
  if (start < end) {
    while (v <= end) {
      analogWrite(pin, v);
      v++;
      delay(delay_ms);
    }
  } else {
    while (v >= end) {
      analogWrite(pin, v);
      v--;
      delay(delay_ms);
    }
  }
}

void setup() {
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void loop() {
  
  int delay_ms = 3;

  smooth_change(OUTPUT_LED_PIN, 0, 64, delay_ms * 4);
  smooth_change(OUTPUT_LED_PIN, 64, 0, delay_ms * 4);
  
  smooth_change(OUTPUT_LED_PIN, 0, 128, delay_ms * 2);
  smooth_change(OUTPUT_LED_PIN, 128, 0, delay_ms * 2);
  
  smooth_change(OUTPUT_LED_PIN, 0, 196, delay_ms * 1.25);
  smooth_change(OUTPUT_LED_PIN, 196, 0, delay_ms * 1.25);

  smooth_change(OUTPUT_LED_PIN, 0, 255, delay_ms);
  smooth_change(OUTPUT_LED_PIN, 255, 0, delay_ms);

//   int v = 0;
//   while(v < 128) {
//     analogWrite(OUTPUT_LED_PIN, v++);
//     delay(delay_ms);
//   }
//   while (v > 0) {
//     v--;
//     analogWrite(OUTPUT_LED_PIN, v);
//     delay(delay_ms);
//   }
//   while(v <= 255) {
//     analogWrite(OUTPUT_LED_PIN, v++);
//     delay(delay_ms);
//   }
}
