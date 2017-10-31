#include <printf.h>
#include <nRF24L01.h>
#include <RF24_config.h>
#include <RF24.h>

RF24 radio(9,10);
void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  radio.begin();
  radio.setChannel(16);
  radio.setPALevel(RF24_PA_MIN);
  radio.openReadingPipe(1, 0xC2C2C2C2C2);
  radio.openWritingPipe(0xE7E7E7E7E7);
  radio.setCRCLength(RF24_CRC_16);  
  printf_begin();
  radio.printDetails();
}

void loop() {
  // put your main code here, to run repeatedly:
  radio.startListening();
  unsigned long data;
  if (radio.available()) {
    while (radio.available()) {                                   // While there is data ready
        radio.read( &data, sizeof(unsigned long) );             // Get the payload
      }
     
    radio.read(&data, 1);
    radio.stopListening();
    Serial.print("data");
  }   
}

