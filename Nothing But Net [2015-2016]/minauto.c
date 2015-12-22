
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    gyro,           sensorGyro)
#pragma config(Sensor, dgtl1,  ultraIntake,    sensorSONAR_cm)
#pragma config(Sensor, dgtl4,  liftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  ultraLift,      sensorSONAR_cm)
#pragma config(Sensor, dgtl8,  ultraFront,     sensorSONAR_cm)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port1,           lift,          tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           frontLeft,     tmotorVex393_MC29, openLoop, encoderPort, I2C_3)
#pragma config(Motor,  port3,           backLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           frontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           backRight,     tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_4)
#pragma config(Motor,  port6,           pewL2,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           pewL1,         tmotorVex393_MC29, openLoop, encoderPort, I2C_2)
#pragma config(Motor,  port8,           pewR1,         tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port9,           pewR2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rollers,       tmotorVex393_HBridge, openLoop, reversed)
#pragma platform(VEX)

float roundsR;
float roundsL;
int increment = 1;
int updateFrequency = 5;
int lSpeed = 65;
int rSpeed= 65;
int x = 18;

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#include "rps.h"
#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!


/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////


task autonomous(){
	while(true){
		rps(18);
	}

}



/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	while(true){
		rps(18);
	}

		// This is the main execution loop for the user control program. Each time through the loop
		// your program should update motor + servo values based on feedback from the joysticks.

		// .....................................................................................
		// Insert user code here. This is where you use the joystick values to update your motors, etc.
		// .....................................................................................

		UserControlCodePlaceholderForTesting(); // Remove this function call once you have "real" code.
	}
