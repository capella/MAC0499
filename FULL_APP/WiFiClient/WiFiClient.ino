#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <SoftwareSerial.h>

ESP8266WiFiMulti WiFiMulti;
SoftwareSerial swSer(D0, D1, false, 256);

const uint16_t port = 3000;           // PORT
const char * host = "192.168.15.11";  // HOST

void setup() {
    swSer.begin(4800);
    Serial.begin(19200);
    delay(10);

    // We start by connecting to a WiFi network
    WiFi.mode(WIFI_STA);
    WiFiMulti.addAP("Capella 9", "capella123");

    while(WiFiMulti.run() != WL_CONNECTED) {
        swSer.print(".");
        delay(500);
    }
    delay(500);
}

void loop() {
    WiFiClient client;

    if (!client.connect(host, port)) {
        swSer.println("connection failed");
        delay(5000);
        return;
    }

    while (client.connected()) {
        while (swSer.available())
          client.print((char) swSer.read());
        while (client.available()) {
          char c = client.read();
          swSer.print(c);
          Serial.print(c, HEX);
        }
    }
    
    swSer.println("connection close");
    client.stop();
    
    delay(5000);
}

