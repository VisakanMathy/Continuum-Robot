#include <Continuum.h>

Continuum robo(0,3);
void setup() {
  Serial.begin(9600);
  robo.pwmSetup();
  robo.setCardinalTuner(0.5);
  robo.setSectionTuner(0);
  
  // put your setup code here, to run once:
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  robo.startPull();

  double x[12] = {0,  0, 0,  0,  0, 0, 0.00,  0, 00, 0, 0,  0 };
  robo.setAngles(x);
  //robo.easyPull(1,120,60);
  while(1){}
}
