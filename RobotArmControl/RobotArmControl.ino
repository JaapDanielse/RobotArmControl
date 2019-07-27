// VirtualPanel RobotArm
#include "VirtualPanel.h"

#define GripClosePos 43 //
#define GripOpenPos 107 //
#define BaseHomePos  55 //
#define Arm1HomePos  83 //
#define Arm2HomePos  83 //

#define ServoDelay 10 //

int GripServoPos = GripOpenPos;  // 
int BaseServoPos = BaseHomePos;  // 
int Arm1ServoPos = Arm1HomePos;  // 
int Arm2ServoPos = Arm2HomePos;  // 




void setup() 
{
  Panel.begin(); // init port and protocol
}

void loop() 
{
  Panel.receive(); // handle panel events form the panel (must be in the loop)
}
