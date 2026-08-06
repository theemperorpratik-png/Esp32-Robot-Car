# Esp32 Robot Car
This is an simple robotic car made with the help if esp32 and motor driver.
# features
- forward
- backward
- left
- right
- Stop
# Components
- ESP32 devkit v1
- L298N (or L293D) Motor Driver
- 4 DC motors
- Robot chassis
- 4 wheels
- Battery
- Power switch
- Jumper wires
# How It Works
The code is pushed to esp32(Which controls the motor driver) with suitable ide and then it is controlled with "Rc bluetooth controller" app from phone.
# Firmware Build & Flash Instructions

## Requirements

Install:

- Arduino IDE
- ESP32 Board Package
- Required libraries


## Installing ESP32 Board Support

1. Open Arduino IDE
2. Go to: File-->Preferences
3. Add ESP32 board URL:https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
4. Open:Tools-->Board--->BoardManager and search esp32 and install:esp32 by Espressif Systems
## Firmware Compilation

1. Clone repository:https://github.com/theemperorpratik-png/Esp32-Robot-Car.git
2. Open firmware folder.
3. Open the .ino file using Arduino IDE.
4. Select board: Tools → Board → ESP32 Dev Module
5. select com part: Tools → Port → COMxx and click verify
now connect esp32 with usb c and press upload it will autoflash.

# Pin Configuration

| ESP32 Pin | Function              |
|-----------|-----------------------|
| GPIO13    | ENA (Left Motor PWM)  |
| GPIO12    | IN1                   |
| GPIO14    | IN2                   |
| GPIO15    | ENB (Right Motor PWM) |
| GPIO27    | IN3                   |
| GPIO26    | IN4                   |

# LIBRARIES USED

    - Arduino Framework
    - BluetoothSerial (ESP32)


# Schematic
<img width="2339" height="1654" alt="Schematic_Robo-Car_2026-07-07" src="https://github.com/user-attachments/assets/d7a407af-25d3-46d2-8453-011839166287" />

# Credits
Code and schematic from "Krawfox(Arjun Khanal)"
