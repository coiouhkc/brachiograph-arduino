#include <Servo.h>

Servo shoulder;
Servo elbow;
Servo wrist;

int SHOULDER_START_ANGLE = 180;
int ELBOW_START_ANGLE = 90;
int WRIST_START_ANGLE = 90;

int shoulderAngle = 180;
int elbowAngle = 90;
int wristAngle = 90;

int i;
int j;

void setup()
{
  shoulder.attach(8);
  shoulder.write(shoulderAngle);

  elbow.attach(9);
  elbow.write(elbowAngle);

  wrist.attach(10);
  wrist.write(wristAngle);
}

void loop()
{

  shoulderAngle = random(0, 180);

  elbowAngle = random(0, 180);

  // shoulder.write(shoulderAngle);

  // elbow.write(elbowAngle);

  // wrist.write(random(0, 180));

  delay(100);
}
