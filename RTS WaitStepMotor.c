/*
Subject: Real time systems
Author: Victor Rocha

This is a program to simulate a single motor step control with process spawn. 
*/

#include <RTSExercises.h>

int main(int argc, char *argv[])
{
	/*
	Call MotorControl over another process and waits
	*/
	printf("\n To control only step motor none parameter should be passed. \n To control step motor and sensor pass any parameter to RTS WaitStepMotor.exe.\n");

	if (argc == 1)
	{
		_spawnl(P_WAIT, "RTS MotorControl.exe", "Motor");
		printf("\n I've been waiting the other process \n");
	}
	else
	{
		_spawnl(P_WAIT, "RTS MotorControl.exe", "Motor Sensor");
		printf("\n I've been waiting the other process \n");
	}
}