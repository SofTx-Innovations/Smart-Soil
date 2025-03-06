# 🌱 Smart Soil
### *by SofTx Innovations Inc.*
---

## 📌 Overview

Project **Smart Soil** is an international, open-source IoT and AI project designed by **SofTx Innovations Inc.** and the **University of Toronto (UofT), Canada**, to provide real-time soil moisture, temperature, and humidity monitoring using the ESP8266 microcontroller. It integrates sensor data and optional weather forecasts to generate AI-based watering recommendations, empowering smart, data-driven agricultural practices worldwide.

This project is ideally structured as a concise, 1.5-hour hands-on activity suitable for workshops, events, or DIY projects.

---

## 🌿 Project Goals

- **Educational**: Quickly learn core IoT concepts by assembling an ESP8266 with sensors.
- **Real-time Monitoring**: View live soil moisture, temperature, and humidity data.
- **AI Recommendations**: Predict optimal watering schedules based on collected data and weather conditions.
- **International Impact**: Designed to be easily implemented globally, with a focus on agricultural efficiency and sustainability.

---

## 🚀 Key Features

- **Real-Time Sensor Data**:
  - Capacitive soil moisture sensor readings (0-100%)
  - Temperature & humidity readings via DHT sensors

- **Data Visualization**:
  - Real-time charts and historical trend visualization.
  - Optional integration of external weather forecast data.

- **AI & Machine Learning Integration**:
  - Simple rule-based AI demonstration.
  - Guidance for collecting your own data for advanced AI predictions.

---

## 🛠️ Hardware Requirements

| Component | Recommended | Notes |
|------------|-------------------------|
| ESP8266 Microcontroller | NodeMCU/Wemos D1 Mini |
| Soil Moisture Sensor | Capacitive Analog Sensor (corrosion-resistant recommended) |
| Temperature & Humidity Sensor | DHT11 or DHT22 |
| Jumper Wires | Male-Female, Male-Male |
| Power Source | USB cable or 5V battery pack |
| Breadboard | Optional, recommended |

---

## 🚀 Quick Start: Hardware Setup (1.5-hour activity)

1. **ESP8266 Setup:**
   - **Soil Moisture Sensor (Analog):**
     - Connect `Analog OUT` to `A0`, `VCC` to `3.3V`, and `GND` to ground (`GND`).

2. **Temperature & Humidity Sensor (DHT Digital)**:
   - Connect `VCC` → `3.3V`, `DATA` → pin `D4`, `GND` → `GND`.

3. **Firmware Flashing**:
   - Use provided Arduino code (`firmware/SmartSoil.ino`).
   - Flash onto your ESP8266 via Arduino IDE.
   - ESP8266 launches Wi-Fi access point (`SmartSoil_AP`).

4. **Check your setup**:
   - Connect your device to the Wi-Fi network `SmartSoilAP`.
   - Open a browser and visit: `http://192.168.4.1/data` to see real-time sensor data.

---

## 📲 Mobile/Web App Features

- **Live Data Display**:
  - Real-time soil moisture (%), temperature (°C), humidity (%)

- **Data Visualization**:
  - View recent sensor trends (daily/weekly trends)
  - Optional rainfall forecast integration for comprehensive watering recommendations.

- **Watering Recommendations (AI)**:
  - Visual predictive recommendations (“Water” or “Don’t Water”).
  - Optional integration with weather forecast API for improved recommendations.

- **Historical Data Logging**:
  - Track past readings for future AI model training.

---

## 🔍 AI and Data Collection

- **Built-in Logic**:
  - Basic decision-making algorithm (e.g., water if soil moisture below threshold and no expected rainfall).

- **Advanced AI Training (optional)**:
  - Instructions provided for collecting long-term data.
  - Train your own AI model (Decision Trees, SVM) using provided Google Colab notebooks in the repository.

### Example Data Structure for Training:
```csv
soil_moisture,temperature,humidity,rain_forecast,watered
520,28,70,20,1
700,27.5,60,80,0
```

---

## 📁 Project Structure

```
SmartSoil/
├── firmware/
│   └── smartsoil.ino                   # ESP8266 Arduino firmware
├─ app/
│   └─ [React Native/Web app source files]
├─ ai-examples/
│   └─ SmartSoilAI-Colab.ipynb            # Google Colab AI demo
├─ docs/
│   └─ wiring_schematic.png
├─ LICENSE
└─ README.md                             # (You are here)
```

---

## 🤝 Contributing
We warmly welcome your contributions! Feel free to:
- **Report issues** by opening a new issue.
- **Suggest** new features, sensors, or AI integrations.
- **Submit pull requests** clearly describing your changes.

---

## 📜 License
**Smart Soil by SofTx Innovations Inc.** is licensed under the [MIT License](LICENSE).

---

## 🌐 Project Information
- **Project Maintainers**: SofTx Innovations Inc. & University of Toronto, Canada
- **GitHub Repository**: [https://github.com/<yourusername>/SmartSoil](https://github.com/<yourusername>/SmartSoil)

---

## 💬 Community & Support

- For issues, questions, or contributions, visit our [Issues](https://github.com/<yourusername>/SmartSoil/issues) page.
- General discussion and feedback: [GitHub Discussions](https://github.com/<yourusername>/SmartSoil/discussions)

---

**Together, let’s use AI and IoT to create smarter, sustainable agriculture globally! 🌱**
