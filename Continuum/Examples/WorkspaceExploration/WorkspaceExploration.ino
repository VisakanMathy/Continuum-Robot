#include <Continuum.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Continuum robo(0, 3);
void setup()
{
  Serial.begin(9600);
  robo.pwmSetup();
  robo.setCardinalTuner(0.4);
  robo.setSectionTuner(0);

  // put your setup code here, to run once:
  delay(1000);
}

void loop()
{
  // put your main code here, to run repeatedly:
  robo.startPull();

  double divisions1 = 2;
  double divisions2 = 2;
  double divisions3 = 2;
  for (int i1 = 0; i1 < 4; i1++)
  {
    int range1i = 76 - robo.currentAngle(1, i1);
    for (int ang1i = 0; ang1i < divisions1; ang1i++)
    {
      robo.pullIncrement(1, range1i / divisions1, i1);
      int range1j = 76 - robo.currentAngle(1, (i1 + 1) % 4);
      for (int angj1 = 0; angj1 < divisions1; angj1++)
      {
        robo.pullIncrement(1, range1j / divisions1, (i1 + 1) % 4);

        for (int i2 = 0; i2 < 4; i2++)
        {
          int range2i = 76 - robo.currentAngle(2, i2);
          for (int ang2i = 0; ang2i < divisions2; ang2i++)
          {
            robo.pullIncrement(2, range2i / divisions2, i2);
            int range2j = 76 - robo.currentAngle(2, (i2 + 1) % 4);
            for (int angj2 = 0; angj2 < divisions2; angj2++)
            {
              robo.pullIncrement(2, range2j / divisions2, (i2 + 1) % 4);

              for (int i3 = 0; i3 < 4; i3++)
              {
                int range3i = 60 - robo.currentAngle(3, i3);
                for (int ang3i = 0; ang3i < divisions3; ang3i++)
                {
                  robo.pullIncrement(3, range3i / divisions3, i3);
                  int range3j = 60 - robo.currentAngle(3, (i3 + 1) % 4);
                  for (int angj3 = 0; angj3 < divisions3; angj3++)
                  {
                    robo.pullIncrement(3, range3j / divisions3, (i3 + 1) % 4);
                    robo.startPull();
                    delay(500);
                  }
                  robo.pullIncrement(3, -range3j, (i3 + 1) % 4);
                  robo.startPull();
                  delay(500);
                }
                robo.pullIncrement(3, -range3i, (i3));
                robo.startPull();
                delay(500);
              }
            }
            robo.pullIncrement(2, -range2j, (i2 + 1) % 4);
            robo.startPull();
            delay(500);
          }
          robo.pullIncrement(2, -range2i, i2);
          robo.startPull();
          delay(500);
        }
      }
      robo.pullIncrement(1, -range1j, (i1 + 1) % 4);
      robo.startPull();
      delay(500);
    }
    robo.pullIncrement(1, -range1i, i1);
    robo.startPull();
    delay(500);
  }
  double x[12] = {0, 0, 0, 0, 0, 0, 0, 0, 00, 0, 0, 0};
  robo.setAngles(x);
  while (1)
  {
  }
}