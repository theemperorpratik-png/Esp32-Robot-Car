# Krawfox_ROBO :  ESP32 Bluetooth Controlled ROBO CAR

    Krawfox_ROBO is an ESP32-based Bluetooth-controlled differential drive robot. It communicates with any Bluetooth Serial Terminal or Android Bluetooth RC Controller app using the ESP32's built-in Classic Bluetooth module.

# The ROBO Supports

    - Forward and Backward Movement
    - Left and Right Turning
    - Stop Command
    - Speed control

# Features

    - ESP32 Bluetooth communication
    - L298N/L293D compatible motor driver
    - PWM motor speed control

# Hardware Required

    - ESP32 Devkit V1
    - L298N (or L293D) Motor Driver
    - TT MOTORS
    - A CHASSIS
    - BATTERY HOLDER
    - BATTERY
    - JUMPER WIRES AND BUNCH OF WIRES

# Pin Configuration

| ESP32 Pin | Function              |
|-----------|-----------------------|
| GPIO13    | ENA (Left Motor PWM)  |
| GPIO12    | IN1                   |
| GPIO14    | IN2                   |
| GPIO15    | ENB (Right Motor PWM) |
| GPIO27    | IN3                   |
| GPIO26    | IN4                   |

# note : ON BLUETOOTH CONNECTION IT SHOWS KRAWFOX_ROBO YOU CAN CHANGE IT VIA THE CODE

# LIBRARIES USED

    - Arduino Framework
    - BluetoothSerial (ESP32)

# Schematic
<img width="2339" height="1654" alt="Schematic_Robo-Car_2026-07-07" src="https://github.com/user-attachments/assets/d7a407af-25d3-46d2-8453-011839166287" />
