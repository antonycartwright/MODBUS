#define mdDeRe 33

void setup() {
  pinMode(mdDeRe, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  digitalWrite(mdDeRe, HIGH);

  //ID
  Serial.write(1);

  //Function Code
  Serial.write(4);

  //Starting Address #1 MSB
  Serial.write(49);
  //Starting Address #2 LSB
  Serial.write(0);

  //Quantity to Read #1 MSB
  Serial.write(0);
  //Quantity to Read #2 LSB
  Serial.write(6);

  //CRC #1
  Serial.write(126);
  //CRC #2
  Serial.write(244);

  Serial.flush();

  delayMicroseconds(120);

  digitalWrite(mdDeRe, LOW);

  delay(1000);

}
