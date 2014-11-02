/*
Subject: Real time operating system
Author: Victor Rocha

This is a calculator to receive argv parameters and make simple operations.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int value1, value2;

	/*
	argc > 3 means only one or two parameter was passed. All parameters must be passed through
	command line, then this stretch of code will prevent any errors.
	*/
	if (argc > 2)
	{

	/*
	Storing parameter values
	*/
	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);

		printf("\n Parameters used: %i and %i \n", value1 ,value2);
		
		printf("\n Parameters sum: %i", value1 + value2);
		printf("\n Parameters subtraction: %i", value1 - value2);
		printf("\n Parameters multiplication: %i", value1 * value2);
		printf("\n Parameters division: %f\n\n", (float) value1 / value2);
	}
	else
		printf("Cannot calculate due null parameters. This program must be executed through command line passing its value.");

	system("pause");
}