String inByt;

void setup() {
  pinMod(LED_BUITLIN, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  //

}

void serialEvent() {
    inByt = Serial.readStringUntil('\n');
   
    if (inByt == "on") {
        digitalWrite(LED_BUILTIN, HIGH);
    } else if (inByt == "off") {
        digitalWrite(LED_BUILTIN, LOW);
    } else {
        continue;
    }
}
