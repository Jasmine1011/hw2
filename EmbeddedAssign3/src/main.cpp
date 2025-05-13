#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH      128   // OLED display width, in pixels
#define SCREEN_HEIGHT     64    // OLED display height, in pixels
#define OLED_RESET        -1    // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS    0x3C  ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

// ������� ���ӵ�I2C(SDA��SCL����)��SSD1306����
Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // OLED��ʼ��
  OLED.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // OLED�����ʾ
  OLED.clearDisplay();
  // OLED���ù��λ��
  OLED.setCursor(1, 1);
  // ����������ɫ
  OLED.setTextColor(SSD1306_WHITE);
  // ��ʾ�ַ�������
  OLED.println("Hello, world!");

  OLED.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}
