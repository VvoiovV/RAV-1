# RAV-1: Bluetooth Controlled Vehicle with Robotic Arm

---

## Description
The **RAV-1** is a Bluetooth-controlled robotic vehicle designed and built during technical high school. The project features a robotic arm with two stepper motors and a servo gripper, making it capable of performing simple tasks remotely. Powered by two 18650 batteries, this compact and functional device showcases skills in robotics, electronics, and programming.
https://www.youtube.com/watch?v=-0A-OW58u-w&ab_channel=Micha%C5%82Grzegorzewski
---

## Features
- **Bluetooth Control**:
  - Operated via the "Bluetooth Electronics" Android application.
  - Allows remote control of vehicle movement and arm functions.
- **Robotic Arm**:
  - Equipped with a servo gripper for picking up objects.
  - Two stepper motors provide precise arm movement.
- **Vehicle Movement**:
  - Driven by a motor controller module for smooth directional control.
- **Compact Power System**:
  - Powered by two 18650 batteries.
  - Includes a step-down inverter for stable voltage regulation.

---

## Hardware Components
- **Microcontroller**: Arduino Nano
- **Motors**:
  - 2x 28BYJ-48 stepper motors with 64:32 gearbox
  - 1x SG-90 servo motor
- **Drivers and Modules**:
  - ULN2003 stepper motor driver (x2)
  - MH1919 PWM motor controller module
  - HC-06 Bluetooth module
  - DC-DC step-down adjustable inverter (5A, 1.25–36V)
- **Power Supply**:
  - 2x 18650 batteries

---

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/VvoiovV/RAV-1.git
   ```
2. Assemble the hardware components as per the provided schematics.
3. Upload the Arduino code to the microcontroller using the Arduino IDE.
4. Pair the HC-06 module with your Android device.
5. Control the vehicle using the "Bluetooth Electronics" application.

---

## Usage
- **Basic Operation**:
  - Use the Android app to move the vehicle forward, backward, left, or right.
  - Operate the robotic arm to pick up and place objects.
- **Recommended Use Cases**:
  - Demonstrations of robotic capabilities.
  - Educational purposes to understand Arduino and motor control.

---

## Planned Improvements
- Replace the stepper motor library to enhance smooth control via Bluetooth.
- Add an ultrasonic distance sensor to automate object detection and gripping.
- Improve overall design for better stability and efficiency.

---

## System Requirements
- Arduino IDE for uploading the code.
- Android device with "Bluetooth Electronics" installed.
- Basic electronics tools for hardware assembly.

---

The **RAV-1** project demonstrates practical skills in robotics, embedded systems, and remote control technologies, making it a strong addition to a portfolio.
