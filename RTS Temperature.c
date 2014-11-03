/**********************************************************************/
/*                                                                    */
/*         Lecture: Real Time Systems								  */
/*		   Author: Victor Rocha                                       */
/*																	  */
/*		This is a program to control temperature					  */
/*		and send out alarms.				  						  */	
/*                                                                    */
/**********************************************************************/

#include <RTSExercises.h>

bool ReatorSafe(void);
bool ReatorOff(void);
bool TempoRead(void);

struct AlarmPriority
{
	int Alarm01;
	int Alarm02;
	int Alarme03;
}AP;


int main(void)
{
	/*
	Definition
	*/
	time_t now;
	struct tm	*timeInfo;

	/*
	Get Current Time
	*/
	now = time(NULL);
	
	/* 
	Time Conversion
	*/
	timeInfo = localtime(&now);
	printf("Current Local Time: %s", asctime(timeInfo));

	/*
	Higher numbers means higher priority
	*/
	AP.Alarm01 = 1;
	AP.Alarm02 = 2;
	AP.Alarme03 = 3;
	
	/*
	while (1)
	{
		if(!ReactorSafe())
			ReactorOff();
	}
	*/

	getchar();
	return 0;
}

bool ReactorSafe(void)

{

}

bool ReactorOff(void)
{

}

bool ReadTime(void)
{

}