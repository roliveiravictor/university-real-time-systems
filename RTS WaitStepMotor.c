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
	_spawnl(P_WAIT, "RTS MotorControl.exe", "RTS MotorControl.exe", NULL);
	printf("\n I've been waiting the other process \n");
}