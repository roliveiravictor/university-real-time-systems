/*
Subject: Real time systems
Author: Victor Rocha

This is a program that actually runs the motor based on WaitStepMotor.c or NoWaitStepMotor.c
*/

#include <RTSExercises.h>

int main(int argc, char *argv[])
{
	/*
	Motor running 10 cycles.
	*/
	for (int i = 0; i < 10; i++)
	{
		printf("\n Motor now running. Cycles count: %i", i + 1);
		Sleep(1000);
	}

	printf("\n");	
}