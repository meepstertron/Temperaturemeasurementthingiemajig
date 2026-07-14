# Temperaturemeasurementthingimajig

That was a mouthful!

This is one of my first fully designed and hopefully made pcbs! :D

basically this is a small sensor node based on the readily availible CH32V003 which is a low cost (~10 cents!) risc-v MCU. it features a feature rich IO (well for 0.1usd it is). I am using the SHT4x chip to actually capture the environmental readings, because it is both accurate and fairly cost effective.

## Why should you care?

Honestly... You probably shouldnt, but for those who do want to know why: the whole node is open source meaning it can be re-mixed, re-branded and changed to your hearts content maybe even slap your logo or a silly cat on the silkscreen, it is also very cheap. running off a cr2032 and only costing about 3usd per node! Now compare that to the shelly series of Humid+Temp nodes...
![image of two shelly products](image.png)


## How is it so cheap??

I got it down to a nice value because i didnt use a expensive MCU like the ESP32 series (even though they are pretty effective in cost if you want wifi) but instead a cheaper and more bare bones MCU, since my project just didnt need it! a simple ASK/OOK transmitter instead of a costly variable or even wifi chip brought it down a lot as well. (we're talking cents but who cares)

## AI...

I want to be as transparent as i can. I did use AI to help me scout components like the SHT40 instead of the AHT20 i was familiar with. i also used it for my rf, it called out my shitty meander (which i calculated as a microstrip, oops) which i then replaced with a more easier to work with coil antenna.
However i do not feel as if i used ai to a higher degree than 20% since i still did all of the design work, i wired up the schematic, i read the datasheets and i eventually designed the pcb.

## What programs were used
 - KiCad
 - Onshape

## Images :D
![Rendered front side of pcb showing components and silkscreen](image-1.png)
![Rendered back side of pcb showing components and silkscreen](image-2.png)
![3d mockup of case lid](image-3.png)
![3d mockup of case body](image-4.png)
## Hackclub? 

This is a submission to hackclub's forge! Hackclub is a cool charity yall should go check them out!

## Contact me or sum

Email: jan.koch@hexagonical.ch

orrr:

@meepstertron on the hackclub slack!