#include <Continuum.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Continuum robo(0, 3);
void setup()
{
  Serial.begin(9600);
  robo.pwmSetup();
  robo.setCardinalTuner(0.5);
  robo.setSectionTuner(0);

  // put your setup code here, to run once:
  delay(1000);
}

void loop()
{
  double x[12] = {0, 0, 0, 0, 0, 0, 0.00, 0, 00, 0, 0, 0};
  robo.setAngles(x);

  // Configuration 1
  //robo.easyPull(1,  180 ,80);
  //robo.easyPull(2,  45 ,0);
  //robo.easyPull(3,  120 ,200);

  // Configuration 2
  //robo.pullIncrement(3,90, 1);
  //robo.pullIncrement(1,120,3);

  // Configuration 3
  //robo.pullIncrement(3,90, 1);
  //robo.pullIncrement(2,90, 0);
  //robo.pullIncrement(1,120,3);

  // Configuration 4
  //robo.pullIncrement(3,90, 1);
  //robo.pullIncrement(2,90, 1);
  //robo.pullIncrement(1,90,1);

  // Configuration 5
  //robo.pullIncrement(3,60, 1);
  //robo.pullIncrement(2,80, 3);
  //robo.pullIncrement(1,45,1);

  //robo.startPull();
  while (1)
  {
  }
}