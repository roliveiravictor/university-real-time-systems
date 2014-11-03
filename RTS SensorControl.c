/*
Subject: Real time systems
Author: Victor Rocha

This is a program that actually runs the motor based on WaitStepMotor.c or NoWaitStepMotor.c
*/

#include <RTSExercises.h>

int main(int argc, char *argv[])
{
	bool sensorStatus = true;

	while (sensorStatus)
	{
		printf("\n Awaiting sensor... \n");
		getchar();
		sensorStatus = !sensorStatus;
		printf("\n Sensor activated. Exiting...\n");
	}
}