---
title: "Multimaterial Pliers"
excerpt: "Design and fabrication of functional pliers using rigid PLA components and a flexible TPU spring."
header:
  image: /assets/img/mmp_2.jpeg
  teaser: /assets/img/mmp_2.jpeg

gallery:
  - url: /assets/img/mmp_1.jpeg
    image_path: /assets/img/mmp_1.jpeg
    alt: "Completed multimaterial pliers"

  - url: /assets/img/mmp_2.jpeg
    image_path: /assets/img/mmp_2.jpeg
    alt: "Multimaterial pliers in use"

  - url: /assets/img/mmp_open.jpeg
    image_path: /assets/img/mmp_open.jpeg
    alt: "Multimaterial pliers in the open position"

permalink: /portfolio/multimaterial-pliers/
---

# Multimaterial Pliers

## Project Overview

For this project, I designed and fabricated a functional set of pliers using two different 3D-printing materials: rigid PLA and flexible TPU. The goal was to create a pair of pliers capable of gripping and picking up small components while using a flexible printed component as the spring mechanism.

The rigid portions of the pliers were printed in PLA, while the center was printed in TPU. Rather than using a traditional metal spring or pin at the center of the pliers, the TPU component deforms as the handles are squeezed and helps return the pliers to their open position when the force is removed.

The complete design consists of five separate components: two handles, two jaws, and one flexible TPU center. Each PLA component mechanically interlocks with the TPU center, allowing the different materials to remain connected without screws, bolts, or other hardware.

{% include gallery caption="Final multimaterial pliers and operation." %}

# Multimaterial Design

Print-in-place designs are mechanisms where multiple moving components can be produced during the same manufacturing process without requiring conventional assembly afterward. These designs commonly use small clearances between neighboring components so that joints, hinges, gears, and other mechanisms can move after printing.

Flexible materials can also be incorporated into these designs. One commonly used combination is a rigid material such as PLA or PETG with a flexible material such as TPU. TPU can act as a flexible connection between rigid components and has been used for applications including flexible joints, hinges, grips, and compliant mechanisms.

For my design, PLA and TPU were useful because they perform two very different mechanical functions. The PLA provides the rigidity needed in the handles and jaws, while the TPU provides the flexibility required for the spring mechanism.



# Design Process

One of the main challenges of the project was developing a mechanism that would actually cause the jaws to **close when the handles were squeezed**.

My design separates the pliers into five components:

| Part | Quantity | Material |
|---|---:|---|
| Handle | 2 | PLA |
| Left Jaw | 1 | PLA |
| Right Jaw | 1 | PLA |
| Flexible Center | 1 | TPU |

The four PLA components connect around the flexible TPU center. The center component acts as both the connection point and the spring for the mechanism.

The first major consideration was the orientation of the handles and jaws. Because the components move around the flexible center, changing their orientation changes the direction that the jaws move. The geometry had to be designed so that pushing the handles toward each other resulted in the two jaws also moving toward each other.

Another major part of the design was determining how to connect the PLA and TPU. Instead of relying on adhesive, the parts were designed with **interlocking features**. The PLA sections slide into corresponding features in the TPU center, mechanically retaining the components.

This was especially important because PLA and TPU have very different mechanical properties. The interlocking geometry allows the forces from the handles to be transferred through the TPU center and into the jaw components.

# TPU Spring

The flexible TPU center is the most important part of the mechanism.

When the handles are squeezed, the PLA pieces transfer the applied force into the TPU center. Because TPU is significantly more flexible than PLA, the center deforms rather than remaining rigid.

This deformation allows the jaw pieces to rotate inward and grip an object. When the handles are released, the elasticity of the TPU helps the center return toward its original geometry, which moves the jaws back toward the open position.

The spring geometry required a balance between flexibility and stiffness. If the TPU section were too thick or rigid, the handles would require too much force to squeeze. If it were too flexible, the pliers would not create enough gripping force and the components would not return to their original position effectively.

# Material Selection

### PLA

PLA was used for the handles and jaws because these components need to remain relatively rigid during operation. Excessive deformation in these parts would reduce the amount of force transferred from the handles to the jaws.

### TPU

TPU was used for the flexible center and spring. Its elasticity allows the center to repeatedly bend and recover as the pliers are opened and closed.

Combining the two materials allowed each material to be used where its mechanical properties were most useful: PLA for structure and TPU for controlled deformation.

# Design Specifications

| Specification | Value |
|---|---:|
| Jaw Length | 149 mm |
| Maximum Jaw Capacity | 15.6 mm |
| Number of Printed Parts | 5 |
| Rigid Material | PLA |
| Flexible Material | TPU |

The jaw capacity was determined by the maximum opening between the two gripping surfaces while the TPU spring remained within a usable range of deformation.

# Print Settings
| Setting | PLA Components | TPU Center |
|---|---:|---:|
| Material | PLA | TPU 90A |
| Layer Height | 0.20 mm | 0.20 mm |
| Nozzle Diameter | 0.40 mm | 0.60 mm |
| Infill | 10% | 13% |
| Perimeters | 3 | 3 |
| Nozzle Temperature | 215 °C | 240 °C |
| Bed Temperature | 65 °C | 60 °C |

The components were designed to be printed primarily flat, which reduced the need for support material and simplified the manufacturing process. For the TPU component, the top and bottom solid layers were removed and the sparse infill was reduced to 13% using a grid pattern. This made the center section more flexible and easier to deform during operation.

# CAD Model

The entire mechanism was designed in Autodesk Fusion. Each handle, jaw, and the flexible center was modeled as an individual component before being combined into the final assembly.

The interactive CAD model can be viewed below.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028113a89bb9c3b91e974?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>


# Pliers gif

The GIF below shows the final pliers opening and closing.

![Multimaterial pliers operating](/assets/img/mmp.gif)
