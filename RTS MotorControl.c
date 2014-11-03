/**********************************************************************/
/*                                                                    */
/*         Lecture: Real Time Systems							      */
/*         Author:  Victor Rocha                                      */
/*																	  */
/*	This is a program that actually runs the motor based on			  */
/*	WaitStepMotor.c or NoWaitStepMotor.c							  */
/*	Also, depending on its parent process may call a sensor control.  */
/*                                                                    */
/**********************************************************************/

#include <RTSExercises.h>

//#define stepper P1

void moveStepMotor();

int main(int argc, char *argv[])
{
	/*
	Motor running 10 or 5 cycles depending who is its parent process.
	*/
	printf("\n My argc is : %d \n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf(" This is my argc : ");
		printf(argv[i]);
		printf("\n");

	}
	

	if (argc == 1)
		for (int i = 0; i < 10; i++)
		{		
			moveStepMotor();
			printf("\n Motor now running. Cycles count: %i", i + 1);
			Sleep(1000);
		}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			moveStepMotor();
			printf("\n Motor now running. Cycles count: %i", i + 1);
			Sleep(1000);
		}

		/*
		Spawn sensor process
		*/
		_spawnl(P_WAIT, "RTS SensorControl.exe", "RTS SensorControl.exe");
	}

	printf("\n");	
}

void moveStepMotor()
{
	/*
	stepper = 0x0C;
	Sleep(1000);
	stepper = 0x06;
	Sleep(1000);
	stepper = 0x03;
	Sleep(1000);
	stepper = 0x09;
	Sleep(1000);
	*/
}