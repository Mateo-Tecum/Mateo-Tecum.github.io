---
title: "Hand MRI Coil Design"
excerpt: "Design and analysis of a compact MRI coil concept for hand imaging using CAD, electromagnetic reasoning, and MATLAB-based evaluation."
header:
  teaser: /assets/images/hand-mri/hand_mri_thumbnail.jpg
sidebar:
  nav: "docs"
---

# Hand MRI Coil Design

![Hand MRI Coil Assembly](/assets/images/hand-mri/hand_mri_hero.jpg)

## Project Overview

This project explored the design of a compact MRI coil intended for imaging the human hand. The goal was to develop a geometry that could fit comfortably around the hand while maintaining a practical coil shape for magnetic resonance imaging applications.

The project combined **mechanical design, electromagnetic concepts, MATLAB analysis, and CAD modeling**. A major focus was balancing the physical geometry of the coil with the electrical and magnetic behavior required for useful MRI signal generation and reception.

### My Role

- Developed and refined the coil geometry
- Created CAD models of the hand and coil assembly
- Used MATLAB to support electromagnetic and geometric analysis
- Evaluated design tradeoffs related to coil size, spacing, and field behavior
- Documented design decisions and limitations

### Tools & Skills

- MATLAB
- SolidWorks / CAD
- Electromagnetics
- MRI fundamentals
- Engineering analysis
- Design iteration
- Technical documentation

---

## Design Problem

MRI systems rely on radio-frequency coils to transmit and receive electromagnetic signals from the region being imaged. For a hand-specific coil, the geometry must be compact enough to closely surround the anatomy while still providing adequate clearance and a useful magnetic field distribution.

The primary design challenge was therefore to create a coil that was:

- Large enough to accommodate a range of hand sizes
- Compact enough to keep the conductive elements close to the anatomy
- Mechanically simple enough to manufacture and assemble
- Geometrically appropriate for electromagnetic analysis
- Suitable for future optimization of field uniformity and signal quality

![Initial Coil Concept](/assets/images/hand-mri/hand_mri_concept.jpg)

---

## CAD Development

The mechanical portion of the project began with a simplified hand model and a surrounding coil structure. Several geometric configurations were considered before selecting a design that provided both clearance and compact packaging.

The CAD model helped define:

- Overall coil dimensions
- Hand-to-coil spacing
- Structural supports
- Conductor paths
- Potential assembly interfaces

![CAD Model](/assets/images/hand-mri/hand_mri_cad.jpg)

The geometry was intentionally designed to allow later iteration. Parameters such as coil width, length, conductor spacing, and distance from the hand could be modified to study their effect on performance.

---

## Electromagnetic Analysis

The electrical behavior of the coil was evaluated using fundamental electromagnetic relationships and MATLAB calculations. The analysis focused on understanding how coil geometry affects the magnetic field generated within the imaging region.

For a current-carrying conductor, magnetic field strength depends on factors including:

- Current magnitude
- Distance from the conductor
- Conductor geometry
- Relative position within the coil

The project used these relationships to compare potential configurations and better understand the tradeoff between compact geometry and field coverage.

![Magnetic Field Plot](/assets/images/hand-mri/hand_mri_field_plot.jpg)

MATLAB was used to visualize the predicted field behavior and compare the relative performance of different design choices.

---

## MATLAB Modeling

A MATLAB workflow was created to support the design process and allow geometric changes to be evaluated more efficiently.

The script was used to:

1. Define coil dimensions and conductor locations
2. Evaluate the magnetic field at selected points
3. Compare field behavior throughout the hand region
4. Generate plots for visualization
5. Support geometry refinement

![MATLAB Analysis](/assets/images/hand-mri/hand_mri_matlab.jpg)

This computational component made it possible to iterate on the mechanical design without relying entirely on physical prototypes.

---

## Engineering Tradeoffs

One of the main lessons from the project was that the mechanically simplest design is not always the best electromagnetic design.

A tighter coil can place conductors closer to the hand and potentially improve signal sensitivity, but it can also reduce patient clearance and make the system more difficult to manufacture or use. A larger structure improves accessibility but increases the distance between the coil and the anatomy.

| Design Variable | Benefit | Tradeoff |
|---|---|---|
| Smaller coil size | Conductors closer to hand | Reduced clearance |
| Larger coil size | Easier hand placement | Lower field strength at anatomy |
| More complex geometry | Potentially better field distribution | Harder manufacturing |
| Simpler geometry | Easier CAD and fabrication | Less optimized field behavior |

---

## Final Design

![Final Hand MRI Design](/assets/images/hand-mri/hand_mri_final.jpg)

The final concept combined a compact mechanical structure with a coil geometry that could be evaluated and refined computationally.

The project helped me connect concepts from **mechanical design and electromagnetics**, while also demonstrating how CAD and MATLAB can be used together during early-stage engineering development.

---

## What I Learned

This project strengthened my ability to work on systems where mechanical geometry directly influences electrical performance. It also gave me experience translating a physical design problem into a computational model.

Key takeaways included:

- Using CAD as part of an analysis workflow rather than only for visualization
- Understanding how geometry influences electromagnetic behavior
- Evaluating engineering tradeoffs rather than optimizing a single variable
- Using MATLAB to support iterative design decisions
- Communicating multidisciplinary engineering work clearly

---
