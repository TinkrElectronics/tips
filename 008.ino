float fVal = 523.4028235;
char sBuffer[11];

void setup() {
  Serial.begin(9600);
  // dtostrf(val, width, prec, output)
  // width - min. width of the output string (includes . & - sign)
  // prec - determines the number of digits after the decimal sign
  dtostrf(fVal, 8, 5, sBuffer);
  Serial.println(sBuffer);
  // Output: 523.40283

  fVal = -34.56845652143;
  dtostrf(fVal, 8, 5, sBuffer);
  Serial.println(sBuffer);
  // Output: -34.56845
}

void loop() {}
