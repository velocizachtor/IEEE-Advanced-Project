#include <nRF24L01.h>
#include <RF24.h>

RF24 lights(CE_R, CS_R); // need to map CE_R, CS_R to teensy pins
RF24 buttons(CE_T, CS_T); // need to map CE_T, CS_T to arduino pins
uint8_t addresses[]

void setup() {
  // put your setup code here, to run once:
  lights.begin();
  buttons.begin();
  lights.setChannel(16);
  buttons.setChannel(16);

  lights.setPALevel(RF24_PA_MIN);
  buttons.setPALevel(RF24_PA_MIN);

  // open reading and writing pipes.
  lights.openWritingPipe(0x1a1a1a1a1a);
  buttons.openReadingPipe(0x1a1a1a1a1a);

  buttons.openWritingPipe(0x5c5c5c5c5c);
  lights.openReadingPipe(0x5c5c5c5c5c);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
