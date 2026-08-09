# 💡 Automatic Street Light using Arduino

## 📌 Abstract

The Automatic Street Light System is an Arduino-based system that automatically controls a light according to the surrounding light intensity.

An LDR (Light Dependent Resistor) module is used to detect whether the environment is bright or dark. The digital output (DO) of the LDR module is connected to the Arduino.

During daytime or bright conditions, the street light remains OFF. During nighttime or dark conditions, the Arduino detects the dark condition and automatically switches the light ON.

This system helps reduce unnecessary electricity consumption and eliminates the need for manual operation.

---

## 🎯 Objectives

- Automatically detect bright and dark conditions.
- Switch the light ON during nighttime.
- Switch the light OFF during daytime.
- Reduce unnecessary electricity consumption.
- Provide a simple and low-cost automatic lighting system.

---

## 🧰 Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| LDR Sensor Module | 1 |
| LED | 1 |
| 220 Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

### LDR Module → Arduino Uno

| LDR Module Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| DO | D2 |

### LED → Arduino Uno

| LED Pin | Arduino Uno |
|---|---|
| Anode (+) | D8 through 220 Ω resistor |
| Cathode (−) | GND |
##TINKERCAD SIMUTATIO[https://www.tinkercad.com/things/aE0r7xBccIK-stunning-snaget-fulffy/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=SIgA-QjM_YI3bw8rhHyhcKC4hK5EfxY5oqwLA0WLBiU]

### Connection Diagram

```text
             LDR MODULE
          ┌──────────────┐
          │ VCC ──────── 5V
          │ GND ──────── GND
          │ DO ───────── D2
          └──────────────┘

                 ARDUINO UNO
                 ┌─────────┐
          DO ────┤ D2      │
                 │         │
          LED ───┤ D8      │
                 └─────────┘
                   │
⚙️ Working Principle
The LDR module detects the surrounding light intensity.
The module provides a digital signal through its DO (Digital Output) pin.
Arduino reads the DO signal through digital pin D2.
When sufficient light is detected, the street light remains OFF.
When darkness is detected, Arduino switches the LED ON.
The process continuously repeats to automatically control the light.
Working Logic
Environment	LDR DO	Light
☀️ Bright / Day	LOW*	OFF
🌙 Dark / Night	HIGH*	ON

Note: The DO polarity can vary depending on the LDR module. If your module works in the opposite way, interchange HIGH and LOW in the program.
                 220Ω
                   │
                 LED
                   │
                  GND
