# 🌱 Smart Greenhouse System

## 📖 Overview

The **Smart Greenhouse System** is an Arduino-based embedded solution designed to automate environmental monitoring and control within a greenhouse. By integrating multiple sensors and actuators, the system continuously monitors critical environmental parameters and responds automatically to maintain optimal conditions for plant growth.

This project demonstrates the practical application of **Embedded Systems**, **Internet of Things (IoT)** concepts, and **automation technologies** in modern agriculture.

---

## 🎯 Project Objectives

* Monitor environmental conditions in real time.
* Automate irrigation based on soil moisture levels.
* Control greenhouse temperature using an automated cooling system.
* Display sensor readings on an LCD screen.
* Reduce manual intervention and improve resource efficiency.

---

## ⚙️ System Features

✅ Real-time Temperature Monitoring

✅ Real-time Humidity Monitoring

✅ Soil Moisture Detection

✅ Light Intensity Measurement

✅ Automated Water Pump Control

✅ Automated Cooling Fan Control

✅ LCD-Based Data Visualization

✅ Serial Monitor Debugging and Monitoring

---

## 🛠️ Hardware Components

| Component               | Description                       |
| ----------------------- | --------------------------------- |
| 🔹 Arduino Uno          | Main microcontroller              |
| 🌡️ DHT11 Sensor        | Temperature & Humidity monitoring |
| 🌱 Soil Moisture Sensor | Soil water level detection        |
| ☀️ LDR Sensor           | Light intensity measurement       |
| 🔌 Relay Module         | Actuator control                  |
| 💧 Water Pump           | Automated irrigation              |
| 🌀 DC Fan               | Temperature regulation            |
| 📺 LCD I2C Display      | Real-time information display     |
| 🔋 Power Supply         | System operation                  |

---

## 🧠 System Logic

### 💧 Irrigation Control

The system continuously reads soil moisture values.

* If soil moisture exceeds the predefined threshold:

  * Water Pump ➜ ON
* Otherwise:

  * Water Pump ➜ OFF

### 🌀 Temperature Control

The system monitors greenhouse temperature using the DHT11 sensor.

* If temperature exceeds **30°C**:

  * Cooling Fan ➜ ON
* Otherwise:

  * Cooling Fan ➜ OFF

---

## 📊 Displayed Information

The LCD screen displays:

| Parameter        | Description              |
| ---------------- | ------------------------ |
| 🌡️ Temperature  | Current temperature (°C) |
| 💧 Humidity      | Current humidity (%)     |
| 🌱 Soil Moisture | Analog sensor reading    |
| ☀️ Light Level   | LDR sensor reading       |

---

## 🔄 Workflow

1. Read sensor values.
2. Process environmental data.
3. Compare readings against predefined thresholds.
4. Activate actuators when required.
5. Display information on LCD.
6. Send data to Serial Monitor.
7. Repeat continuously.

---


## 💻 Technologies Used

* Arduino IDE
* C/C++
* Embedded Systems Design
* Sensor Integration
* Automation Systems
* IoT Fundamentals

---

## 📂 Repository Structure

```text
smart-greenhouse-system/
│
├── greenhouse.ino
├── README.md
├── images/
│   ├── project.jpg
│   ├── lcd.jpg
│   └── circuit.png
└── report.pdf
```

## 🚀 Future Improvements

* Mobile application integration
* Wireless monitoring via Wi-Fi
* Cloud-based data storage
* Historical data visualization
* Smart notifications and alerts
* Machine learning for predictive irrigation

---

## 👥 Contributors

**Hana Shaimi**
Computer Engineering Student

**Majdoline Elbennadi**
Computer Engineering Student

---

## 🎓 Academic Information

**Course:** Embedded Systems

**Professor:** Parvaneh Sargon

**Institution:** Cyprus International University

---

## 📜 License

This project was developed for academic and educational purposes.
