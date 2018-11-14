#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti WiFiMulti;

const uint16_t port = 3000;           // PORT
const char * host = "192.168.15.11";  // HOST

void setup() {
    Serial.begin(19200);
    delay(10);

    // We start by connecting to a WiFi network
    WiFi.mode(WIFI_STA);
    WiFiMulti.addAP("Capella 9", "capella123");

    while(WiFiMulti.run() != WL_CONNECTED) {
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
        while (Serial.available())
          client.print(Serial.read());
        while (client.available())
          Serial.print(client.read());
    }
    
    Serial.println("connection close");
    client.stop();
    
    delay(5000);
}

