#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3); // RX, TX 2, 3번에 열어준다
void setup() {
  Serial.begin(9600); // 시리얼모니터 키는거. 9600에서 킴
  BTSerial.begin(9600); // BlueTooth Serial, 115200 
} 
void loop() { 
  if(BTSerial.available()) {
    Serial.write(BTSerial.read()); 
  }
  if(Serial.available()) {
    BTSerial.write(Serial.read());
  }
}
