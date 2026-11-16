---
title: "Pinch Flow Fractionation"
excerpt: "PFF made more precise with ePFF on a glass slide attempting to seperate particles of two different sizes, 50 and 150 microns respectively"
header:
  image: /assets/img/PFF/Base_profile.png
  teaser: /assets/img/PFF/Base_profile.png

gallery:
  - url: /assets/img/PFF.jpeg
    image_path: /assets/img/PFF.jpeg
    alt: "Presenting Microfluidics"

  - url: /assets/img/PFF.png
    image_path: /assets/img/PFF.png
    alt: "Microfluidic device iteration 2"

permalink: /portfolio/Pinch Flow Fractionation/
---
## Introduction 
Pinch flow Fractionation utilizes laminar flow of a buffer solution from one inlet and a solution containing two different sized particles from another inlet to intersect in a pinched segment.
The pinched segment results in the particle sizes to sinter with respect to their diameter size (for spheres). This sintering combined with the pinched segment is later introduced into a broadened
section to increase the distance of the particles that was created from their sintering from the pinched segment.
The particles are now separated with a certain distance determined by the width of the broadened and pinched segments, labeled below.
For this project, the concept of pinch flow fractionation is further utilized by adding an additional feature, that is the same concept of the pinched segment. We introduce another pinched segment,
referred to as an enhanced pinch flow fractionation, causing their to be more distance from the two particle sizes. This creates an issue of optimization, as the ePFF needs to be maximized,
without narrowing the width of the sink segment too much when maximizing the broadened section, which would lead to more resistance (not what is wanted). 
What is pinch flow fractionation? How does it work? How does enhanced pinch flow further separate particles? 
A couple of examples of involve separating tiny particles, such as antibodies that range in the micron size. 
The use of PFF over traditional techniques like filters involve no need to change filters, which is much more difficult in this size range (10-100 microns).

A possible practical application of PFF involves separating pancreatic islets cells, which are a cluster of cells responsible for regulating blood glucose through the insulin hormone release. These islets are in a large range of sizes in the micron size, and would be valuable to obtain for transplantation. In a study by Oh et al.(2022), researchers investigated the islet recovery from surgery and how the difficulties from that were from obtaining a sufficient amount of the cells for research. 
With the use of PFF, islets could be easier to obtain by separating them into different group sizes. This is likely better than a physical filtration method as the islets are less likely to have the same issues from filtration methods. Not using filters that would clog or trap the islet cells during separation would lead to more amounts of cells being obtained for use. The study done by Nam et al.,(2010) demonstrated microfluidic devices being used to separate the islets from 50 and 250 microns. Additionally, in comparison to other applications where the sorting is important the sorting of islets is less significant, so if there is an error in sorting, then the entire PFF application would not be ruined.

Citations: 
Nam KH, Yong W, Harvat T, Adewola A, Wang S, Oberholzer J, Eddington DT. Size-based separation and collection of mouse pancreatic islets for functional analysis. Biomed Microdevices. 2010 Oct;12(5):865-74. doi: 10.1007/s10544-010-9441-2. PMID: 20549367.

Oh JY, Kim YH, Lee S, Lee YN, Go HS, Hwang DW, Song KB, Lee JH, Lee W, So S, Kang E, Jun E, Shim IK, Kim SC. The Outcomes and Quality of Pancreatic Islet Cells Isolated from Surgical Specimens for Research on Diabetes Mellitus. Cells. 2022 Jul 29;11(15):2335. doi: 10.3390/cells11152335. PMID: 35954179; PMCID: PMC9367344.

## Design 
For determining where to place the outlet boundaries for small and large particles, the readings cited helped with particle tracking when utilizing PFF and ePFF. Using these equations to calculate the displacement of the particles, then the dimensions of the snake-like structure can be defined. The outlet boundaries were determined based on the width of the 3 particles. Since the outlet channels are all controlled by syringe pumps with variable flow rates, the dimensions for these are less significant. Therefore, each outlet channel is set to equal lengths to prevent problems with clogging in the flow path due to hydraulic resistance being set from outlet channel paths (smaller length channels have higher resistance, and larger channels have lower resistance, which would be unchanged if parameterized to certain lengths), therefore the outlet channels were left alone, and the priority was creating as much distance between the particles. 
To maximize the separation between small and large particles, the broadened section was designed to be as wide as possible, which was limited by the width of the microscope glass (25mm). Leaving room for the edges, this left the broadened with, wb, to be set to 19mm. For the enhanced broadened section, the width was attempting to make it as large as possible without shrinking the sink segment to where the resistance is too high for the sink segment. This length ended up being around 6mm. Lastly before being able to set a small dimension for the enhanced pinch width, it was necessary to track where the particles would be. Since the length off the original PFF was around 2mm, the particles set to their calculated lengths from yPFF at 2mm from the edge of the pinched segment. Calculating the yPF and adding some distance as a tolerance, the length of the enhanced pinched segment was 3.5mm. Calculating for the y ePFF, the smaller and larger particles were left with a distance of around 3.7mm apart. 
Since the snake-like structure also increases displacement of the particles from the length of the channels, the lengths were each set to around 6mm.

/assets/img/PFF/Base_profile.png
/assets/img/PFF/DimensionsPFF.png

Instructions 
• Briefly list the most important steps for creating a μfluidic device with resin printing.  

 creating the μfluidic with resin printing involves some limitations. The big one being a reaction from the photoinitiators during resin printing. With resin priting involving photoinitiators,
 these photoinitiators inhibit the cross-linking with the pdms.
 Additionally when creating the μfluidic device, the glass slide with the pdms has to be careful
## Discussion 
• Why resin printing compared to other manufacturing techniques? 
• How could your design be scaled up or modified to handle a wider range of particle 
sizes? 
• What factors set the lower limit on the particle size that can be separated with pinch
flow fractionation?  
## Multimedia 
o Sketch showing critical dimensions of channels (hand drawn or from CAD) 
o Picture of Testing setup (syringe pumps, device, etc.) 
o Picture of the mold 
o Picture of Plasma treating process (image supplied) 
o Picture of casted device 
 
μfluidic VPP Project 
o Embedded YouTube video of the device working. 
The best submissions will organize their webpage with headings, use short paragraphs (3-4 
sentences), and embed images where they are mentioned to break up text. 
