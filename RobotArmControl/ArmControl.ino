#include <Servo.h>

#define Servo1PIN 11 // Grip
#define Servo2PIN 10 // Arm 1
#define Servo3PIN  9 // Arm 2
#define Servo4PIN  6 // Base

#define StartButtonPin 5 //
#define ResetButtonPin 4 //

Servo GripServo;  // 
Servo Arm1Servo;  // 
Servo Arm2Servo;  // 
Servo BaseServo;  // 

boolean Power = false;
boolean GripOpen = true;


void ServoControlOn()
{
  GripServo.attach(Servo1PIN);  // attaches the servo to the servo object
  GripServo.write(GripServoPos);   // sets the servo position according set value
  
  Arm1Servo.attach(Servo2PIN);  // attaches the servo to the servo object
  Arm1Servo.write(Arm1ServoPos);   // sets the servo position according set value
  
  Arm2Servo.attach(Servo3PIN);  // attaches the servo to the servo object
  Arm2Servo.write(Arm2ServoPos);   // sets the servo position according set value
  
  BaseServo.attach(Servo4PIN);  // attaches the servo to the servo object
  BaseServo.write(BaseServoPos);   // sets the servo position according set value
}

void ServoControlOff()
{
  GripServo.detach();  // attaches the servo to the servo object
  Arm1Servo.detach();  // attaches the servo to the servo object
  Arm2Servo.detach();  // attaches the servo to the servo object
  BaseServo.detach();  // attaches the servo to the servo object
}

void ServoControlWrite()
{
  if(Power)
  {
    GripServo.write(GripServoPos);   // sets the servo position according set value
    Arm1Servo.write(Arm1ServoPos);   // sets the servo position according set value
    Arm2Servo.write(Arm2ServoPos);   // sets the servo position according set value
    BaseServo.write(BaseServoPos);   // sets the servo position according set value
    delay(ServoDelay);               // waits for the servo to get there
  }
}

