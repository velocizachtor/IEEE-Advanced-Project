void setup() {
  // put your setup code here, to run once:
  RF24::RF24(9,10) radio;
  radio.begin();
  radio.setChannel(16);
  radio.setPALevel(RF24_PA_MIN);
  radio.openReadingPipe(1, 0xc2c2c2c2);
  radio.openWritingPipe(0xe7e7e7e7e7);
  radio.setCRCLength(RF24_CRC_16);  
}

void loop() {
  // put your main code here, to run repeatedly:
  radio.startListening();
  int data[31];
  if (radio.available()) {
    data = radio.read(&data,sizeof(data));
  } 
    radio.stopListening();
  }   
}
