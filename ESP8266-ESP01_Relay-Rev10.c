// DISCLAIMER
// IF YOU'RE USING THE MODULE ESP-01S RELAY V1.0 (ONEEEE!) 
// YOU WILL NEED TO REMOVE RESISTOR2 AND WELD PINS VCC->CH-PD DIRECTLY IN THE MODULE
// SEE THIS VIDEO TO HELP YOU -> https://youtu.be/OCWvhxCiyw4
// IN BLYNK APP USE gp0(0->1) AS BUTTON

//Activates communication between the Blynk App and Serial Monitor:
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>  //Import a "ESP8266WiFi" library.
#include <BlynkSimpleEsp8266.h> //Import a "BlynkSimpleEsp8266" library.

//Authentication of account in the Blynk app.
char auth[] = "YourToken";

//Enter the WiFi credentials.
char ssid[] = "WifiName";
char pass[] = "WifiPass";

void setup() {
  //Starts Communication Serial:
  Serial.begin(9600);
  
  //Starts Wi-Fi communication:
  Blynk.begin(auth, ssid, pass);
}

//Run the LOOP function repeatedly.:
void loop() {
  //Starts communication with the Blynk application:
  Blynk.run();
  delay(10);
}
