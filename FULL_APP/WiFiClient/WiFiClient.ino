#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <SoftwareSerial.h>

ESP8266WiFiMulti WiFiMulti;
SoftwareSerial swSer(D1, D2, false, 256);

const uint16_t port = 3000;           // PORT
const char * host = "192.168.0.55";  // HOST

void setup() {
    swSer.begin(4800);
    Serial.begin(19200);
    delay(10);

    // We start by connecting to a WiFi network
    WiFi.mode(WIFI_STA);
    WiFiMulti.addAP("NET_2G82F0A3", "E282F0A3");

    while(WiFiMulti.run() != WL_CONNECTED) {
        swSer.print(".");
        Serial.print(".");
        delay(500);
    }
    delay(500);
}

void loop() {
    WiFiClient client;

    if (!client.connect(host, port)) {
        Serial.println("connection failed");
        delay(5000);
        return;
    }

    while (client.connected()) {
        while (swSer.available()) {
          char c = swSer.read();
          client.print((char) c);
          Serial.print((char) c);
        }
        while (client.available()) {
          char c = client.read();
          swSer.print(c);
//          Serial.print(c, HEX);
          delayMicroseconds(50);
        }
    }
    
    swSer.println("connection close");
    client.stop();
    
    delay(5000);
}

