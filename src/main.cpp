#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "helloWorld.h"

ESP8266WebServer server(80);

const char *ssid = APSSID;
const char *password = APPASS;

void handleRoot();

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println('\n');

  WiFi.softAP(ssid, password);
  Serial.print("Access Point \"");
  Serial.print(ssid);
  Serial.println("\" started");

  Serial.print("IP address:\t");
  Serial.println(WiFi.softAPIP());
  
  server.on("/", handleRoot);
  server.begin();
}

void loop() {
    server.handleClient();
}

void handleRoot(){
    server.send(200, "text/plain", "Hello World!");
}