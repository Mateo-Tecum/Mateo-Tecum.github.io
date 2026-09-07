---
title: "Robot Dog"
excerpt: "Interactive Arduino robot dog using ultrasonic sensing, joystick control, expressive LCD eyes, and servo-driven motion."
header:
  teaser: /assets/img/robot_dog_header.jpeg
  overlay_image: /assets/img/robot_dog_header.jpeg
permalink: /portfolio/robot-dog/
---

## Overview

I designed and built an interactive robot dog for my Mechatronics final project. The project combined SolidWorks, Arduino programming, 3D printing, sensors, and servo motors into one system that could react to both the user and its surroundings.

The robot uses two main inputs, a joystick and an HC-SR04 ultrasonic distance sensor. These inputs control a 20x4 LCD display and four SG92R servo motors. The LCD acts as the face of the dog and displays different eye expressions, while the servos are used to create movement in the tail and one of the legs.

![Robot Dog](/assets/img/robot_dog_1.jpeg)

## Features

- Interactive 20x4 LCD face with multiple eye expressions
- Ultrasonic distance sensing
- Manual joystick control
- Joystick push-button input
- Four SG92R servo motors
- Distance-dependent reactions
- Servo-driven tail mechanism
- Dynamic leg movement
- Custom SolidWorks and 3D-printed components
- Arduino-based control system

## Inputs and Outputs

The dog has two main ways of receiving information. The HC-SR04 sensor measures the distance between the dog and an object in front of it, while the joystick allows someone to directly interact with the dog. The joystick includes an X-axis, Y-axis, and push button, giving several different possible inputs from one component.

The main outputs are the LCD and servo motors. Different conditions in the Arduino code determine which eye expression should be displayed and how the servos should move. This required quite a few different conditions since multiple inputs could be affecting the robot at the same time.

| Type | Component | Purpose |
|---|---|---|
| Input | HC-SR04 Ultrasonic Sensor | Measures distance from objects |
| Input | Joystick X-axis | Left and right user input |
| Input | Joystick Y-axis | Up and down user input |
| Input | Joystick Switch | Additional button input |
| Output | 20x4 I2C LCD | Displays different eye expressions |
| Output | SG92R Servo Motors | Creates tail and leg movement |

## Parts List

| Part | Quantity |
|---|---:|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Joystick Module | 1 |
| 20x4 I2C LCD Display | 1 |
| SG92R Micro Servo Motors | 4 |
| Breadboard | 1 |
| Jumper Wires | Various |
| 3D Printed Components | Various |
| String for Tail Linkage | 1 |
| Fasteners / Assembly Hardware | Various |

## Mechanical Design

The body and mechanical components were designed in SolidWorks and then manufactured using 3D printing. The CAD had to provide places for the Arduino, LCD, ultrasonic sensor, servos, and wiring while also keeping the general shape of a dog.

![Robot Dog CAD](/assets/img/robot_dog_cad.jpeg)

The tail was one of the more important mechanical parts to get working. The SG92R servos are pretty small and could not move a heavy tail or a linkage with too much resistance. An early version used wire to connect the servo mechanism to the tail, but there was too much resistance and the wire eventually snapped. The final version used string instead, and the servo arm spacing was changed to give the tail more movement without putting as much load on the servos.

![Tail Design](/assets/img/robot_dog_tail.jpeg)

The original design also had more movement planned for the legs, but the 3D printing and assembly ended up being rushed near the end of the project. Three of the legs became static printed parts while one leg was kept dynamic and controlled by a servo.

### SolidWorks Files

The SolidWorks models used to design and print the robot can be viewed below.

- [Robot Dog Assembly](/assets/solidworks/robot_dog_assembly.SLDASM)
- [Robot Dog Body](/assets/solidworks/robot_dog_body.SLDPRT)
- [Robot Dog Head](/assets/solidworks/robot_dog_head.SLDPRT)
- [Robot Dog Tail](/assets/solidworks/robot_dog_tail.SLDPRT)
- [Robot Dog Leg](/assets/solidworks/robot_dog_leg.SLDPRT)

*The file names above can be changed to match the actual SolidWorks files in the repository.*

## Electronics and Wiring

The electronics were connected through a combination of analog and digital Arduino pins. The joystick uses two analog inputs and one digital input, while the ultrasonic sensor uses two digital pins. Each servo also has its own control pin.

### Ultrasonic Sensor Wiring

![Ultrasonic Sensor Wiring](/assets/img/robot_dog_ultrasonic_wiring.png)

| HC-SR04 | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### Joystick Wiring

![Joystick Wiring](/assets/img/robot_dog_joystick_wiring.png)

| Joystick | Arduino |
|---|---|
| +5V | 5V |
| GND | GND |
| VRX | A0 |
| VRY | A1 |
| SW | D7 |

### Servo Wiring

![Servo Motor Wiring](/assets/img/robot_dog_servo_wiring.png)

| Servo | Arduino Signal Pin |
|---|---|
| Servo 1 | D8 |
| Servo 2 | D11 |
| Servo 3 | D12 |
| Servo 4 | D13 |

All four servos also require 5V power and a common ground with the Arduino.

The LCD uses I2C communication, with SDA connected to A4 and SCL connected to A5.

## Programming

The Arduino code combines all of the sensor readings and outputs into one program. The ultrasonic sensor continuously measures distance while the joystick is also being read for manual input. The program then checks a number of different conditions to decide what the dog should do.

One of the more difficult parts of the code was having several inputs and outputs working together. For example, the joystick can change an expression while the distance sensor is also trying to change the expression based on how close something is. Because of this, the code has to determine which input has priority and then send the correct output to the LCD and servos.

The LCD uses custom characters instead of regular text to create the eyes. Different functions in the program produce neutral, happy, sleepy, surprised, angry, left-looking, right-looking, and super-happy expressions.

### Arduino Code

[View the full Arduino code (`robot_dog.ino`)](robot_dog.ino)

## Build Process

The final dog changed quite a bit from the original proposal. The first design was going to include a pump and a stepper motor in addition to the other components. These were eventually removed because I did not have enough time to figure out how to properly program the pump and where it could actually be housed inside the dog without interfering with the rest of the electronics.

![Robot Dog Prototype](/assets/img/robot_dog_prototype.jpeg)

The display was also changed during development. A smaller display was originally tested before moving to the larger 20x4 LCD. The larger display gave more room to create the eye expressions and made the face much easier to see.

![LCD Expressions](/assets/img/robot_dog_eyes.jpeg)

## Final Assembly

The final system combines the printed mechanical structure with the Arduino, ultrasonic sensor, joystick, LCD, and servo motors. Although some of the original ideas were removed, the final version was able to combine a lot of different inputs and outputs into one working system.

![Robot dog](/assets/img/robot_dog_1.jpeg)
