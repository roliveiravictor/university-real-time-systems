/**********************************************************************/
/*                                                                    */
/*         Lecture: Real Time Systems								  */
/*		   Author: Victor Rocha                                       */
/*																	  */
/*		This is a program to simulate a single motor step			  */	
/*		control with process spawn.									  */
/*                                                                    */
/**********************************************************************/

#include <RTSExercises.h>

int main(int argc, char *argv[])
{
	/*
	Call MotorControl over another process without wait
	*/
	_spawnl(P_NOWAIT, "RTS MotorControl.exe", "Motor");
	printf("\n Ain't gonna wait the other process \n");
}