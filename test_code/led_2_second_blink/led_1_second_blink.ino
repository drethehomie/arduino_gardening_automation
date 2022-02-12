/*

Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  FROM:  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
  
*/


pinMode(LED_BUILTIN, OUTPUT);

digitalWrite(LED_BUILTIN, HIGH);

digitalWrite(LED_BUILTIN, LOW);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
