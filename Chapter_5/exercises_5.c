#include "lib_5.h"
/*
	Write a program that
	converts time in minutes to time in hours and minutes.
	Use	#define or const to create a symbolic constant for 60.
	Use a while loop to allow the user to enter values repeatedly
	and terminate the loop if a value for the time of 0 or less is entered.
*/

void timeconv(void)
{
	const int SPVN = 60;	// SPVN --> sexagesimal place value notation
	int min;
	printf("Please enter the minute: ");
	scanf_s("%i", &min);

	while (min > 0)
	{
		printf("%d minutes = %d hours %d minutes! \n", min, min / SPVN, min % SPVN);
		printf("Please enter the minute:");
		scanf_s("%i", &min);
	}

	printf(" INPUT ERROR!");
	getchar();
}

/*
	Write a program that
	asks for an integer and then prints all the integers from (and including) that value up to (and including) a value larger by 10.
	(That is, if the input is 5, the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or newline.
*/

void selfadd()
{
	int num;
	printf("Please enter a integer you like best: ");
	scanf_s("%i", &num);
	for (int i = 10; i > 0; i--)
	{
		printf("%d \n", num);
		num++;
	}

}

/*

*/