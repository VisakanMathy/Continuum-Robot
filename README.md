# Continuum Robot

The purpose of this repository is to create an open source continuum robot and control system that is accesible using low cost components and 3D printers. It includes a list of SolidWorks part files and a basic arduino library with examples for controls.

## Using the CAD
Begin by downloading and extracting the [part files and assemblies](Continuum-Robot-Design) to a desired location and then open up the file. You can now edit the [equationsAll.txt](Continuum-Robot-Design/equationsAll.txt) file and explore changing parameters. Some key parameters are indicated in the following table:

Parameter | Orginal Value
------------ | -------------
Spine Diameter | 15 mm
Disc Thickness | 4mm
Ligament Angle | 40&deg;
Ligament Width | 2mm
Disc Seperation | 6mm
No. Disc/Segment | 5
No. Segments | 3

Once you are configured, you can print and assemble your continuum robot.

## Setting up
Make sure to attach the header pins to the channels in the coorect order with channel 0-3 being dedicated to the segment closest to the base and attached with zero at the top and follows round clockwise. Having done so begin exploring the different control methods using the [Core.ino](Continuum/Examples/Core/Core.ino) to get started and once you're setup you can test your robot using [WorkspaceExploration.ino](Continuum/Examples/WorkspaceExploration/WorkspaceExploration.ino)

## The Arduino Library
Begin by installing the Continuum library and the [Adafruit_PWMServoDriver](https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library) library. Once installed it is recommended to set up a single servo motor by utilising the examples and tutorials available on [Adafruit](https://learn.adafruit.com/16-channel-pwm-servo-driver/). It is important recollect the boundary frequency values to transition into this library.





