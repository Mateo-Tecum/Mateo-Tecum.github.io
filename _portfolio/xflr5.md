---
title: "Aircraft Aerodynamic Modeling & CFD Analysis"
excerpt: "Aerodynamic modeling of an aircraft using XFLR5 and CFD to evaluate lift, drag, pressure distribution, and overall aerodynamic performance."
header:
  teaser: /assets/images/aircraft-analysis/aircraft_thumbnail.jpg
sidebar:
  nav: "docs"
---

# Aircraft Aerodynamic Modeling & CFD Analysis

![Aircraft Aerodynamic Analysis](/assets/images/aircraft-analysis/aircraft_hero.jpg)

## Project Overview

This project focused on evaluating the aerodynamic performance of an aircraft using a combination of **XFLR5 aerodynamic modeling and computational fluid dynamics (CFD)**.

The objective was to understand how aircraft and wing geometry influence lift, drag, pressure distribution, and flow behavior. XFLR5 was used for rapid aerodynamic analysis, while CFD provided a more detailed visualization of the surrounding flow field.

### tasks

- Created and refined aircraft and wing geometry
- Imported and analyzed airfoil data in XFLR5
- Evaluated lift and drag over a range of operating conditions
- Compared aerodynamic performance at multiple angles of attack
- Performed CFD analysis of the aircraft geometry
- Interpreted pressure and velocity contours
- Compared simplified aerodynamic predictions with numerical flow results

## Design & Analysis Objective

Aircraft performance depends strongly on the relationship between geometry and airflow. Even relatively small changes in wing shape, angle of attack, or airfoil selection can significantly affect lift, drag, and stability.

The analysis focused on several key questions:

- How does lift coefficient change with angle of attack?
- At what point does aerodynamic performance begin to degrade?
- How does drag increase as lift demand increases?
- Where are the highest and lowest pressure regions located?
- How closely do XFLR5 predictions agree with CFD trends?

![Aircraft Geometry](/assets/images/aircraft-analysis/aircraft_geometry.jpg)

---

## Airfoil Analysis

The first stage of the project involved evaluating the selected airfoil.

XFLR5 was used to analyze airfoil behavior across a range of angles of attack and Reynolds numbers. This provided an initial understanding of the aerodynamic characteristics before evaluating the complete aircraft.

Key outputs included:

- Lift coefficient, \(C_L\)
- Drag coefficient, \(C_D\)
- Lift-to-drag ratio, \(L/D\)
- Pitching moment coefficient
- Stall behavior

![Airfoil Polar](/assets/images/aircraft-analysis/airfoil_polar.jpg)

The airfoil data helped establish expectations for the full wing and aircraft model.

---

## XFLR5 Aircraft Model

A complete wing and aircraft model was then developed in XFLR5.

The model included the primary aerodynamic surfaces and allowed the aircraft to be analyzed under multiple operating conditions.

![XFLR5 Model](/assets/images/aircraft-analysis/xflr5_model.jpg)

Parameters evaluated included:

- Angle of attack
- Flight velocity
- Reynolds number
- Wing geometry
- Lift coefficient
- Drag coefficient
- Aerodynamic efficiency

---

## Lift Curve

One of the primary outputs was the relationship between angle of attack and lift coefficient.

![Lift Curve](/assets/images/aircraft-analysis/lift_curve.jpg)

At lower angles of attack, lift increased approximately linearly. As the angle increased, nonlinear behavior became more significant as the wing approached stall.

This relationship is important because it helps identify the usable operating range of the wing and provides insight into aircraft performance during climb, cruise, and low-speed flight.

---

## Drag Polar

The drag polar was used to examine the relationship between lift and drag.

![Drag Polar](/assets/images/aircraft-analysis/drag_polar.jpg)

As lift increased, induced drag became increasingly important. The resulting curve was used to evaluate aerodynamic efficiency and identify operating conditions where the aircraft achieved a stronger lift-to-drag ratio.

---

## Lift-to-Drag Performance

The lift-to-drag ratio provides a useful measure of aerodynamic efficiency.

\[
\frac{L}{D} = \frac{C_L}{C_D}
\]

A higher lift-to-drag ratio indicates that the aircraft is producing more useful lift for a given amount of aerodynamic drag.

![Lift to Drag Ratio](/assets/images/aircraft-analysis/lift_drag_ratio.jpg)

This analysis helped identify the approximate operating region in which the aircraft would perform most efficiently.

---

# CFD Analysis

To supplement the XFLR5 results, CFD was used to evaluate the aircraft in a full numerical flow field.

While XFLR5 provides rapid aerodynamic predictions, CFD allows the airflow around the geometry to be examined in significantly greater detail.

The CFD workflow included:

1. Importing or recreating the aircraft geometry
2. Creating the surrounding fluid domain
3. Generating the computational mesh
4. Defining inlet, outlet, and wall boundary conditions
5. Selecting appropriate fluid properties
6. Solving the flow field
7. Evaluating pressure, velocity, and aerodynamic forces

![CFD Domain](/assets/images/aircraft-analysis/cfd_domain.jpg)

---

## Computational Mesh

The computational domain was discretized into a mesh, with increased refinement near the aircraft surfaces where pressure and velocity gradients were expected to be highest.

![CFD Mesh](/assets/images/aircraft-analysis/cfd_mesh.jpg)

Mesh quality is important because poor resolution near the wing can reduce the accuracy of predicted aerodynamic forces and flow separation.

The mesh was therefore refined around:

- Leading edges
- Trailing edges
- Wing surfaces
- Fuselage interfaces
- Wake regions

---

## Pressure Distribution

The pressure contour shows how aerodynamic pressure varies across the aircraft.

![Pressure Contour](/assets/images/aircraft-analysis/cfd_pressure.jpg)

Lower pressure over the upper wing surface and higher pressure underneath the wing contribute to the net aerodynamic lift force.

The CFD pressure distribution also made it possible to identify localized regions of strong pressure gradients near the leading edge and other geometric transitions.

---

## Velocity Field

Velocity contours were used to visualize how the airflow accelerates around the aircraft.

![Velocity Contour](/assets/images/aircraft-analysis/cfd_velocity.jpg)

The flow field showed regions of accelerated flow around the wing surfaces as well as changes in velocity downstream of the aircraft.

These results provided a visual explanation for trends observed in the XFLR5 aerodynamic data.

---

## Streamlines

![CFD Streamlines](/assets/images/aircraft-analysis/cfd_streamlines.jpg)

Streamlines were used to examine the direction of airflow and identify regions where flow behavior changed significantly.

This made it easier to observe:

- Flow acceleration
- Wake development
- Potential separation regions
- Wingtip flow behavior
- Interaction between aerodynamic surfaces

---

## Comparing XFLR5 and CFD

Using both XFLR5 and CFD demonstrated the value of combining lower-cost engineering models with higher-fidelity numerical tools.

| Method | Strength | Limitation |
|---|---|---|
| XFLR5 | Fast aerodynamic estimation | Uses simplified aerodynamic assumptions |
| CFD | Detailed flow visualization and pressure data | Greater computational cost |
| CAD | Accurate geometric representation | Does not independently predict aerodynamic performance |

Rather than treating either method as a single source of truth, the results were compared for consistent aerodynamic trends.

![XFLR5 CFD Comparison](/assets/images/aircraft-analysis/xflr5_cfd_comparison.jpg)

---
