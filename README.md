💡 Automatic Street Light using Arduino
Abstract

The Automatic Street Light System is an Arduino-based system designed to automatically control a street light according to the surrounding light intensity. An LDR (Light Dependent Resistor) is used to detect the brightness of the environment.

When sufficient light is available during daytime, the street light remains OFF. When the surrounding light level decreases, Arduino detects the dark condition and automatically switches the street light ON using a relay.

The system helps reduce unnecessary electricity consumption and eliminates the need for manual operation.

🎯 Objectives
Automatically detect day and night conditions.
Switch the street light ON during darkness.
Switch the street light OFF during sufficient brightness.
Reduce unnecessary electricity consumption.
Provide a simple and low-cost automation system.
🧰 Components Required
Component	Quantity
Arduino Uno	1
LDR	1
10 kΩ Resistor	1
Relay Module	1
LED	1
220 Ω Resistor	1
Breadboard	1
Jumper Wires	As required
🔌 Circuit Connections
LDR
LDR Circuit	Arduino
LDR one terminal	5V
LDR other terminal	A0
10 kΩ resistor one terminal	A0
10 kΩ resistor other terminal	GND

The LDR and 10 kΩ resistor form a voltage divider, with the junction connected to A0.

LED
LED	Arduino
Anode (+)	D8 through 220 Ω resistor
Cathode (−)	GND
Relay Module
Relay Pin	Arduino
VCC	5V
GND	GND
IN	D7
⚙️ Working Principle
The LDR senses the surrounding light intensity.
The voltage divider produces an analog voltage corresponding to the light level.
Arduino reads this value through analog pin A0.
Arduino compares the LDR reading with a predefined threshold.
When the environment becomes dark, the LED and relay are switched ON.
When sufficient light is detected, the LED and relay are switched OFF.
