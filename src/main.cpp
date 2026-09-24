#include <Arduino.h>

#define LED_PIN 2   // LED บนบอร์ด ESP32 DevKit ส่วนใหญ่ต่ออยู่ที่ GPIO2

void setup() {
  pinMode(LED_PIN, OUTPUT);     // ตั้งขานี้เป็นขาส่งออก
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // เปิด LED
  delay(1000);                  // รอ 1 วินาที
  digitalWrite(LED_PIN, LOW);   // ปิด LED
  delay(1000);
}