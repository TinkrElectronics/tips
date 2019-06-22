int tipNo = 7;
char sBuffer[100];
char sTitle[10] = "Tinkr";
char sSubtitle[10] = "Tip";

void setup() {
  Serial.begin(9600);

  sprintf(sBuffer, "Tip Number %d.", tipNo);
  Serial.println(sBuffer);
  // Prints: Tip Number 7.
  
  sprintf(sBuffer, "%s - %s #%d.", sTitle, sSubtitle, tipNo);
  Serial.println(sBuffer);
  // Prints: Tinkr - Tip #7.

  Serial.println("Tip Number " + (String) tipNo + ".");
}

void loop() {}
