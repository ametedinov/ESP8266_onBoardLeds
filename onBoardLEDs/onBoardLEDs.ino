/*
 * This program controls the on-board LEDs of the nodeMCU ESP8266 board.
 * The blue LED on the ESP12 chip is connected to GPIO2.
 * The red LEd on the NodeMCU breakout is on GPIO13 which is internally defined as LED_BUILTIN.
 * The LEDs have inverse logic. 0 corresponds to ON, 1 corresponds to OFF. 
 *    You can use Eclipse for Arduino to find the file where a particular function/constant
 *    is defined. You simply Ctrl+click on the function and Eclipse opens the definition file.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW); //this is the Red LED on the NodeMCU

  pinMode(2, OUTPUT);             //this is the BLUE led on the ESP-12 Module.
  digitalWrite(2, LOW); 
}
void loop() {
}
