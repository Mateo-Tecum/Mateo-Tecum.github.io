---
title: "Bellan Lab Research"
excerpt: "Experimental calibration, prototyping, and data analysis for an iPSC-derived neurovascular research model."
header:
  image: /assets/img/present-research.jpeg
  teaser: /assets/img/research-poster.png

gallery:
  - url: /assets/img/present-research.jpeg
    image_path: /assets/img/present-research.jpeg
    alt: "Presenting biomedical engineering research"

  - url: /assets/img/research-poster.png
    image_path: /assets/img/research-poster.png
    alt: "Microinjector calibration research poster"

  - url: /assets/img/research2.jpeg
    image_path: /assets/img/research2.jpeg
    alt: "Experimental research setup"

permalink: /portfolio/research/
---

## Biomedical Engineering Research

I conduct research in the **Bellan Lab at Vanderbilt University**, where I work on experimental systems used to study signaling within an iPSC-derived neurovascular model.

My work has involved developing and calibrating experimental hardware, collecting microscopy data, analyzing results, and fabricating components used in the research setup.

The project has given me experience applying mechanical engineering and programming skills to a biological research environment where repeatability, precision, and experimental design are especially important.

---

## Microinjector Calibration

One of my primary projects has been calibrating an **OpenSpritzer microinjector** for controlled delivery of very small fluid volumes.

The system uses compressed air and electronically controlled pulse durations to eject fluid through a glass micropipette. Because the injected quantities can be extremely small, small changes in pressure, pulse duration, capillary geometry, or positioning can significantly affect the result.

My work involved developing a repeatable calibration procedure and experimentally determining how system parameters affect the volume delivered.

![OpenSpritzer research setup](/assets/img/research2.jpeg)

---

## Experimental Work

Calibration required running repeated trials while varying operating conditions such as:

- Injection pressure
- Pulse duration
- Micropipette geometry
- Experimental positioning

Fluid was injected into mineral oil so that individual droplets could be imaged and measured under a microscope.

From these measurements, I could estimate the volume delivered during each pulse and compare performance across different operating conditions.

This required careful experimental setup and repeatability because the quantities being measured were on the pico- to nanoliter scale.

---

## Data Analysis

After collecting microscopy measurements, I processed the experimental data to characterize how injection volume changed with pressure and pulse duration.

This involved:

- Organizing experimental datasets
- Converting measured droplet dimensions into estimated volumes
- Comparing repeated trials
- Generating calibration curves
- Evaluating linearity and experimental variability
- Identifying useful operating ranges for future experiments

I used computational tools including **MATLAB and Python** to process data and visualize relationships between the microinjector's operating parameters and measured output.

Future additions to this page will include examples of the analysis scripts, calibration plots, and data-processing workflow used during the project.

---

## Engineering & Prototyping

The research has also required designing and modifying components used around the experimental setup.

I have used engineering tools including:

- **SolidWorks / CAD**
- **3D printing**
- **Arduino**
- **MATLAB**
- **Python**
- Microscopy and imaging equipment
- Experimental instrumentation
- Mechanical assembly and prototyping

Some components were designed and fabricated to organize electronics and improve the usability of the experimental setup.

Working in a biological research lab has also required adapting engineering designs around constraints that are less common in traditional mechanical projects, including microscope access, sterile workflows, fragile glass components, and very small experimental volumes.

---

## Research Application

The calibrated microinjector is intended to become part of a larger experimental system for studying communication between neurons and vascular structures.

My role has focused primarily on developing and validating the engineering tools required to make those experiments possible.

Rather than treating the microinjector as a black-box instrument, I worked to characterize its behavior experimentally so that future injections could be performed with known and repeatable operating parameters.

---

## Research Poster

The calibration work was presented as part of my research at Vanderbilt.

![Microinjector calibration research poster](/assets/img/research-poster.jpeg)

{% include gallery caption="Research and experimental work at Vanderbilt University" %}
