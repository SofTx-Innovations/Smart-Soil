#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>
#include <ArduinoJson.h>
#include <DHT.h>

#define SENSOR_PIN A0   // Soil Moisture Sensor (Analog)
#define DHTPIN D4       // DHT11 Data Pin (Digital)
#define DHTTYPE DHT11   // DHT11 Type

const char *ssid = "ESP8266_SoilMonitor";  // AP SSID
const char *password = "12345678";         // AP Password

ESP8266WebServer server(80);
DNSServer dnsServer;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(115200);
    dht.begin();
    pinMode(SENSOR_PIN, INPUT);

    // Start ESP8266 in AP Mode
    WiFi.softAP(ssid, password);
    Serial.println("\n=== ESP8266 Soil & Climate Monitor ===");
    Serial.println("Access Point Started");
    Serial.print("Connect to WiFi: "); Serial.println(ssid);
    Serial.println("Visit: http://192.168.4.1\n");

    // Start DNS Server (for Captive Portal)
    dnsServer.start(53, "*", WiFi.softAPIP());

    // Define Web Server routes
    server.on("/", handleRoot);
    server.on("/data", handleData);
    
    server.begin();
    Serial.println("Web server started!");
}

void loop() {
    dnsServer.processNextRequest();
    server.handleClient();
}

// Serve the main HTML page
void handleRoot() {
    String html = "<html><head>";
    html += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
    html += "<script>function getData(){";
    html += "fetch('/data').then(response => response.json()).then(data => {";
    html += "document.getElementById('moisture').innerHTML = data.moisture + '% - ' + data.soil_status;";
    html += "document.getElementById('temperature').innerHTML = data.temperature + '°C';";
    html += "document.getElementById('humidity').innerHTML = data.humidity + '%';";
    html += "});";
    html += "setTimeout(getData, 2000);} window.onload = getData;";
    html += "</script></head><body>";
    html += "<h2>ESP8266 Soil & Climate Monitor</h2>";
    html += "<h3>Soil Moisture: <span id='moisture'>Loading...</span></h3>";
    html += "<h3>Temperature: <span id='temperature'>Loading...</span></h3>";
    html += "<h3>Humidity: <span id='humidity'>Loading...</span></h3>";
    html += "</body></html>";

    server.send(200, "text/html", html);
}

// Serve JSON sensor data and print to Serial Monitor
void handleData() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    int sensorValue = analogRead(SENSOR_PIN);
    int moisturePercent = map(sensorValue, 300, 1024, 100, 0);
    moisturePercent = constrain(moisturePercent, 0, 100);

    String moistureLevel;
    if (moisturePercent >= 80) {
        moistureLevel = "Very Wet 🌊";
    } else if (moisturePercent >= 60) {
        moistureLevel = "Wet 💧";
    } else if (moisturePercent >= 40) {
        moistureLevel = "Moist 🌱";
    } else if (moisturePercent >= 20) {
        moistureLevel = "Dry 🌾";
    } else {
        moistureLevel = "Very Dry 🌵";
    }

    // Print sensor values to Serial Monitor
    Serial.println("\n--- Sensor Readings ---");
    Serial.print("Soil Moisture: "); Serial.print(moisturePercent); Serial.println("%");
    Serial.print("Moisture Status: "); Serial.println(moistureLevel);
    Serial.print("Temperature: "); Serial.print(temperature); Serial.println("°C");
    Serial.print("Humidity: "); Serial.print(humidity); Serial.println("%");
    Serial.println("-----------------------");

    // Prepare JSON response
    StaticJsonDocument<256> doc;
    doc["moisture"] = moisturePercent;
    doc["soil_status"] = moistureLevel;
    doc["temperature"] = temperature;
    doc["humidity"] = humidity;

    String response;
    serializeJson(doc, response);
    
    server.send(200, "application/json", response);
}
