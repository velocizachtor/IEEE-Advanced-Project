#include <printf.h>
#include <nRF24L01.h>
#include <RF24_config.h>
#include <RF24.h>

RF24 radio(9,10);
void setup() {
  // put your setup code here, to run once: 
  radio.begin();
  radio.setChannel(16);
  radio.setPALevel(RF24_PA_MIN);
  radio.openReadingPipe(1, 0xe7e7e7e7);
  radio.openWritingPipe(0xc2c2c2c2c);
  radio.setCRCLength(RF24_CRC_16);  
}

void loop() {
  // put your main code here, to run repeatedly:
  char test = 'A';
  radio.write(&test,sizeof(test));
}
