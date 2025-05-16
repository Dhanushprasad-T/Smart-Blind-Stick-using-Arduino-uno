# Smart Blind Stick using Arduino UNO

An advanced smart assistive device designed to help visually impaired individuals detect obstacles and water on their path. The system uses an ultrasonic sensor, buzzer, vibration motor, and water sensor, all controlled by an Arduino UNO, to provide real-time alerts and enhance user safety.

## Features

- *Obstacle Detection*: Ultrasonic sensor detects objects ahead.
- *Audible Alerts*: Buzzer activates when an obstacle or water is detected.
- *Vibration Feedback*: Vibration motor provides tactile alerts for obstacles.
- *Water Detection*: Water level sensor detects puddles or wet surfaces.
- *Compact and Portable*: Designed to be lightweight and easy to mount on a walking stick.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- Vibration Motor
- Water Level Sensor (Analog)
- Jumper Wires
- Breadboard (optional)
- 9V Battery or USB power supply

## Circuit Overview

1. *Ultrasonic Sensor*:
   - Trig Pin → Digital Pin 9
   - Echo Pin → Digital Pin 10

2. *Buzzer* → Digital Pin 8  
3. *Vibration Motor* → Digital Pin 7  
4. *Water Sensor (Analog)* → Analog Pin A0  
5. *Power Supply*: 9V battery or USB

> Ensure proper resistor use if needed for the motor and sensor.

## How It Works

- The *ultrasonic sensor* measures the distance to obstacles ahead. If something is closer than 50 cm, both the *buzzer* and *vibration motor* are activated.
- The *water sensor* detects water on the ground. If water is detected, the buzzer activates as a warning signal.
- Both systems work independently and simultaneously to ensure real-time feedback to the user.

## Arduino Code

The full source code is available in the SmartBlindStick.ino file. The code handles input from the ultrasonic and water sensors, and controls the buzzer and vibration motor based on the inputs.

## Getting Started

1. Clone or download this repository.
2. Open the .ino file in VS Code or Arduino IDE.
3. Connect the components according to the circuit overview.
4. Upload the code to your Arduino UNO.
5. Power the setup and test the functionality.

## Applications

- Assistive walking stick for visually impaired users.
- Educational project for embedded systems and IoT learning.
- Foundation for further development (GPS, voice alerts, etc.)


## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).