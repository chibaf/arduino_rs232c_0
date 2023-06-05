#include <SoftwareSerial.h>

// 第1パラメータがRXDと接続したPIN、第2パラメータがTXDと接続したPIN
SoftwareSerial max3232Serial(7, 8);

unsigned int cnt = 0;

void setup() {
  max3232Serial.begin(9600);
  max3232Serial.listen();
}

void loop() {
  ++cnt;
  char sprintfbuff[64] = {0};
  sprintf(sprintfbuff,"cnt:0x%02X", cnt);
  max3232Serial.println(sprintfbuff);
  delay(1000);
}
