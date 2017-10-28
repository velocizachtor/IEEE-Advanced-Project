void setup() {
  // put your setup code here, to run once:
  RF24::RF24(9,10);
  RF24::radio.begin();
  RF24::setChannel(16);
  RF24::setPALevel(RF24_PA_MIN);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
