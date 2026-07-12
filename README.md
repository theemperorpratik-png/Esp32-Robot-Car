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
Code and schemstic from "Krawfox(Arjun Khanal)"
