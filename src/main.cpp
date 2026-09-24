#include <Arduino.h>

#define LED_PIN 2   // LED บนบอร์ด ESP32 DevKit ส่วนใหญ่ต่ออยู่ที่ GPIO2

void setup() {
  Serial.begin(115200);         // เปิด Serial ที่ความเร็ว 115200
  pinMode(LED_PIN, OUTPUT);     // ตั้งขานี้เป็นขาส่งออก
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // เปิด LED
  Serial.println("LED ON");
  delay(500);                   // รอ 0.5 วินาที
  digitalWrite(LED_PIN, LOW);   // ปิด LED
  Serial.println("LED OFF");
  delay(500);
}