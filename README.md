# color-based-gem-sorting-arduino
An Arduino-based automated color sorting system that uses a TCS3200 color sensor and servo motors to detect and sort colored gems into designated bins.
# Color-Based Gem Sorting System using Arduino

## Overview

This project implements an automated color sorting system using an Arduino Nano, TCS3200 Color Sensor, and Servo Motors. The system detects the color of gems based on RGB frequency values and automatically sorts them into their respective bins.

The project was developed as part of the Electronics System Design and Automation (ESDA) course.

---

## Features

- Automatic color detection using TCS3200 sensor
- RGB frequency-based color classification
- Automated sorting using servo motors
- Low-cost embedded system solution
- Continuous real-time operation

---

## Hardware Components

| Component | Purpose |
|------------|----------|
| Arduino Nano | Main Controller |
| TCS3200 Color Sensor | Color Detection |
| Servo Motor (2) | Feeding and Sorting Mechanism |
| Breadboard | Circuit Connections |
| Jumper Wires | Wiring |
| 5V DC Adapter | Power Supply |

---

## Working Principle

1. A gem is placed in front of the TCS3200 color sensor.
2. The sensor measures reflected RGB light intensity.
3. Arduino Nano reads the output frequencies.
4. RGB values are compared with calibrated threshold values.
5. The detected color is classified.
6. Servo motors rotate to direct the gem into the correct collection bin.
7. The process repeats automatically for the next gem.

---

## System Architecture

Color Sensor (TCS3200)
        ↓
Arduino Nano
        ↓
Color Classification
        ↓
Servo Motor Control
        ↓
Gem Sorted into Bin

---

## Algorithm

1. Initialize sensor and servo motors.
2. Read Red frequency.
3. Read Green frequency.
4. Read Blue frequency.
5. Compare RGB values with thresholds.
6. Identify gem color.
7. Rotate sorting servo.
8. Drop gem into assigned bin.
9. Repeat process.

---

## Technologies Used

- Arduino IDE
- Embedded C/C++
- TCS3200 Color Sensor
- Servo Motor Control
- PWM Signals

---

## Advantages

- Faster than manual sorting
- Reduces human errors
- Cost-effective solution
- Easy to implement and maintain

---

## Limitations

- Sensitive to external lighting conditions
- Requires sensor calibration
- Less accurate for very dark colors

---

## Future Improvements

- Machine Learning based color classification
- Conveyor belt automation
- IoT-based monitoring
- Higher precision color sensing


---

## License

This project is developed for educational and academic purposes.