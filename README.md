# 🌱 Smart Soil

<div align="left">

![Version](https://img.shields.io/badge/version-1.0.0-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Status](https://img.shields.io/badge/status-active-brightgreen)

**An intelligent IoT solution for precision agriculture**

*Developed by SofTx Innovations Inc. in collaboration with the University of Toronto*

</div>

---

## 📌 Overview

**Smart Soil** is an international, open-source IoT and AI project designed to revolutionize agricultural practices through real-time monitoring and intelligent recommendations. Using affordable hardware components and sophisticated algorithms, Smart Soil provides:

- Real-time soil moisture monitoring
- Temperature and humidity tracking
- AI-powered watering recommendations
- Historical data analysis for optimized crop management

This project is structured as a concise, 1.5-hour hands-on activity suitable for workshops, educational events, or DIY enthusiasts.

<div align="center">
  <img src="https://i.ibb.co/Xxh3RkqH/App-Preview.png" alt="Smart Soil App Interface" width="400"/>
  <p><em>Smart Soil mobile interface showing real-time sensor data</em></p>
</div>

---

## 🌿 Project Goals

- **Educational** - Learn core IoT concepts through hands-on experience
- **Monitoring** - Access live soil and environmental data from anywhere
- **Intelligence** - Leverage AI for data-driven agricultural decisions
- **Sustainability** - Optimize water usage and improve crop yields
- **Accessibility** - Designed for global implementation with minimal resources

---

## 🚀 Key Features

### 📊 Real-Time Sensor Data
- Capacitive soil moisture readings (0-100%)
- Temperature & humidity monitoring via DHT sensors
- Low-power operation for extended deployment

### 📈 Data Visualization
- Interactive charts and historical trend analysis
- Customizable dashboards for at-a-glance information
- Optional integration with external weather forecast APIs

### 🧠 AI & Machine Learning
- Rule-based recommendations for beginners
- Advanced predictive models for experienced users
- Extensible framework for custom algorithm implementation

---

## 🛠️ Hardware Requirements

| Component | Recommended Model | Purpose |
|-----------|-------------------|---------|
| Microcontroller | NodeMCU/Wemos D1 Mini (ESP8266) | Brain of the system |
| Soil Moisture Sensor | Capacitive Analog Sensor | Measures soil water content |
| Temperature & Humidity | DHT11 or DHT22 | Monitors environmental conditions |
| Jumper Wires | Male-Female, Male-Male | Connects components |
| Power Source | USB cable or 5V battery pack | Powers the system |
| Breadboard | Mini breadboard | Optional for prototyping |

<div align="center">
  <img src="https://i.ibb.co/VWrCSVWC/ESP-Wiring.png" alt="ESP8266 Wiring Diagram" width="600"/>
  <p><em>Hardware connection diagram for Smart Soil system</em></p>
</div>

---

## ⚡ Quick Start: Hardware Setup (1.5-hour activity)

### 1. Assemble the Hardware
- **Soil Moisture Sensor (Analog):**
  - Connect `Analog OUT` → `A0`
  - Connect `VCC` → `3.3V`
  - Connect `GND` → `GND`

- **Temperature & Humidity Sensor (DHT):**
  - Connect `VCC` → `3.3V`
  - Connect `DATA` → pin `D4`
  - Connect `GND` → `GND`

### 2. Flash the Firmware
- Download the Arduino code from `firmware/SmartSoil.ino`
- Install required libraries in Arduino IDE:
  - ESP8266WiFi
  - DHT sensor library
  - ArduinoJson
- Upload the code to your ESP8266

### 3. Connect to Your Device
- The ESP8266 will create a Wi-Fi access point named `SmartSoil_AP`
- Connect your device to this network
- Open a browser and navigate to `http://192.168.4.1/data`
- You should see real-time sensor data in JSON format

### 4. Access the Web Interface
- Navigate to `http://192.168.4.1` for the full dashboard
- Monitor your soil conditions in real-time
- Receive watering recommendations based on current data

---

## 📱 Mobile/Web App Features

### Live Dashboard
- Real-time soil moisture percentage
- Current temperature and humidity readings
- Connection status and last update timestamp
- Auto-refresh functionality

### Data Analysis
- Daily and weekly trend visualization
- Customizable alert thresholds
- Export functionality for external analysis

### Smart Recommendations
- AI-powered watering suggestions
- Integration with local weather forecasts (optional)
- Customizable for different plant types and growing conditions

### Data Management
- Secure cloud storage options
- Local data logging capabilities
- Privacy-focused design

---

## 🧠 AI and Data Science

### Built-in Intelligence
- Basic threshold-based decision making
- Simple rule engine for common plant varieties
- Adjustable parameters for different environments

### Advanced AI (Optional)
- Instructions for collecting training data
- Pre-built machine learning models in Google Colab
- Framework for implementing custom algorithms

#### Example Training Data Format:
```csv
timestamp,soil_moisture,temperature,humidity,rain_forecast,watered
2023-06-01T12:00:00,520,28,70,20,1
2023-06-02T12:00:00,700,27.5,60,80,0
2023-06-03T12:00:00,350,30,55,0,1
```

---

## 📁 Project Structure

```
SmartSoil/
├── firmware/
│   ├── smartsoil.ino              # Main ESP8266 firmware
│   └── config.h                   # Configuration parameters
│
├── app/
│   ├── web/                       # Web dashboard
│   ├── mobile/                    # React Native mobile app
│   └── assets/                    # Images and resources
│
├── ai-examples/
│   ├── basic_model.ipynb          # Beginner-friendly model
│   ├── advanced_model.ipynb       # Advanced prediction model
│   └── data_samples/              # Example datasets
│
├── docs/
│   ├── getting_started.md         # Detailed setup guide
│   ├── troubleshooting.md         # Common issues and solutions
│   └── images/                    # Documentation images
│
├── LICENSE                        # MIT License
└── README.md                      # Project overview (you are here)
```

---

## 🤝 Contributing

We welcome contributions from developers, makers, and agricultural enthusiasts worldwide! Here's how you can help:

- **Code**: Improve firmware, app features, or AI algorithms
- **Documentation**: Enhance guides, translations, or examples
- **Testing**: Validate functionality in different environments
- **Ideas**: Suggest new features or improvements

Please see our [CONTRIBUTING.md](CONTRIBUTING.md) guide for more details.

---

## 📜 License

**Smart Soil** is proudly open source, released under the [MIT License](LICENSE).

---

## 🌐 Project Information

- **Maintainers**: SofTx Innovations Inc. & University of Toronto, Canada
- **Website**: [https://smartsoil.softx.io](https://smartsoil.softx.io)
- **Repository**: [https://github.com/softx-innovations/SmartSoil](https://github.com/softx-innovations/SmartSoil)

---

## 💬 Community & Support

- **Issues**: [GitHub Issues](https://github.com/softx-innovations/SmartSoil/issues)
- **Discussions**: [GitHub Discussions](https://github.com/softx-innovations/SmartSoil/discussions)
- **Email**: support@smartsoil.softx.io
- **Twitter**: [@SmartSoilIoT](https://twitter.com/SmartSoilIoT)

---

<div align="center">

**Smart agriculture for a sustainable future** 🌱

<img src="https://img.shields.io/badge/Made%20with-❤️-red" alt="Made with love">

</div>
