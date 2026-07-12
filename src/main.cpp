#include <Arduino.h>
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// Motor Pins
#define ENA 13
#define IN1 12
#define IN2 14

#define ENB 15
#define IN3 27
#define IN4 26

// PWM Configuration
const uint8_t PWM_CH_A = 0;
const uint8_t PWM_CH_B = 1;
const uint16_t PWM_FREQ = 1000;
const uint8_t PWM_RES = 8;

int speedValue = 200;

void stopMotor();
void forward();
void backward();
void left();
void right();

void setup() {
  Serial.begin(115200);

  SerialBT.begin("Krawfox_ROBO");



  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  ledcSetup(PWM_CH_A, PWM_FREQ, PWM_RES);
  ledcAttachPin(ENA, PWM_CH_A);

  ledcSetup(PWM_CH_B, PWM_FREQ, PWM_RES);
  ledcAttachPin(ENB, PWM_CH_B);

  ledcWrite(PWM_CH_A, speedValue);
  ledcWrite(PWM_CH_B, speedValue);

  stopMotor();

  Serial.println("__ Krawfox_ROBO is ready! __");
}

void loop() {

  if (SerialBT.available()) {

    char cmd = SerialBT.read();

    Serial.print("Received: ");
    Serial.println(cmd);

    switch (cmd) {

      case 'F':
        forward();
        break;

      case 'B':
        backward();
        break;

      case 'L':
        right();
        break;

      case 'R':
        left();
        break;

      case 'S':
        stopMotor();
        break;

      case '0': speedValue = 0; break;
      case '1': speedValue = 25; break;
      case '2': speedValue = 50; break;
      case '3': speedValue = 75; break;
      case '4': speedValue = 100; break;
      case '5': speedValue = 125; break;
      case '6': speedValue = 150; break;
      case '7': speedValue = 175; break;
      case '8': speedValue = 200; break;
      case '9': speedValue = 225; break;
      case 'q': speedValue = 255; break;
    }

    ledcWrite(PWM_CH_A, speedValue);
    ledcWrite(PWM_CH_B, speedValue);
  }
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  // Left motor backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  // Right motor forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  // Left motor forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Right motor backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotor() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}