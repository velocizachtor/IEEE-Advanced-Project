void setup() {
  // put your setup code here, to run once:
  RF24::RF24(9,10) radio;
  radio.begin();
  radio.setChannel(16);
  radio.setPALevel(RF24_PA_MIN);
  radio.openReadingPipe(,);
  radio.openWritingPipe();
  radio.setCRCLength(RF24_CRC_16);  
}

void loop() {
  // put your main code here, to run repeatedly:
  radio.startListening();
  
  
}
