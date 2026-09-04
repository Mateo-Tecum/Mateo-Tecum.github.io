---
title: "Syringe Pump"
excerpt: "Arduino driven syringe pump with adjustable flow rate and bidirectional motion"
header:
  image: /assets/img/syringe_pump.jpeg
  teaser: /assets/img/syringe_pump.jpeg
gallery:
  - url: /assets/img/syringe_pump.jpeg
    image_path: /assets/img/syringe_pump.jpeg
    alt: "Completed syringe pump"

  - url: /assets/img/sp_setup.jpeg
    image_path: /assets/img/sp_setup.jpeg
    alt: "Syringe pump assembly"

  - url: /assets/img/sp_features.jpeg
    image_path: /assets/img/sp_features.jpeg
    alt: "Syringe pump features"
permalink: /portfolio/syringe-pump/
---

## Syringe Pump

I designed and fabricated a custom syringe pump as part of a digital fabrication project.

The system combines mechanical design, electronics, embedded control, and fabricated components to produce controlled linear motion of a syringe plunger. Additional controls(inputs) were added for better use.

My portion included making the assembly and parts and engineering drawings of the entire CAD model. It also included created the 3d printed custom parts that mount the syringe onto the linear actuator so that the syringe can have fluid flow out properly and in a controlled manner.

# Features

- **Adjustable Flow Rate:**  
  A potentiometer allows the user to adjust the speed of the stepper motor. The Arduino calculates the corresponding syringe flow rate based on the syringe geometry and actuator motion.

- **Multiple Syringe Sizes:**  
  The system can be configured for different syringe sizes by changing the syringe dimensions used in the Arduino code.

- **Bidirectional Motion:**  
  Two direction controls (buttons) that allow the carriage to move forward to dispense fluid or backward to reset the syringe pump.

- **Start/Stop Control:**  
  A dedicated button allows the user to start and stop motor motion without disconnecting power.

- **Travel Limiting:**  
  The actuator travel distance is limited in the Arduino program to prevent the carriage from moving beyond the usable length of the syringe.

- **Arduino Control:**  
  Motor speed, direction, travel distance, and flow-rate calculations are controlled through the Arduino program.

- **Custom Fabricated Components:**  
  The syringe supports, motor mounting components, and actuator structure were designed around the mechanical system and fabricated using 3D printing.

# Off-the-Shelf Parts

| Part | Quantity |
| --- | ---: |
| Arduino microcontroller | 1 |
| Stepper motor | 1 |
| Stepper motor driver | 1 |
| Lead screw / threaded rod | 1 |
| Flexible shaft coupling | 1 |
| Linear guide rods | 2 |
| Linear bearings | 2 |
| Potentiometer | 1 |
| On/Off push button | 1 |
| Direction control buttons | 2 |
| Syringe | 1 |
| Power supply | 1 |
| Breadboard / prototyping board | 1 |
| Jumper wires | Various |
| Fasteners | Various |


# 3D-Printed Parts

| Part | Quantity |
| --- | ---: |
| Syringe barrel holder | 1 |
| Syringe plunger carriage | 1 |
| Motor mount | 1 |
| Lead screw support | 1 |
| Linear guide supports | 2 |
| Syringe mounting supports | Various |
| Electronics / control mounting components | Various |

# Arduino Code

The syringe pump is controlled using an Arduino program that handles motor speed, direction, travel limits, user inputs, and flow-rate calculations.

[**View the Syringe Pump Arduino Code on GitHub**](https://github.com/Mateo-Tecum/Mateo-Tecum.github.io/blob/main/syringe_pump_code.ino)

### Electronics

The pump incorporates an Arduino-based control system along with user inputs and electronics for controlling the actuator.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a408db1211465ff366?mode=embed" width="1024" height="768" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Video Demo
<h2>Syringe Pump Demonstration</h2>

<video width="100%" controls>
  <source src="/assets/video/syringe_pump_demo.mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>

<p style="text-align: center;">
  <em>Demonstration of the syringe pump operating under Arduino control.</em>
</p>

{% include gallery caption="Syringe Pump Design and Assembly" %}
