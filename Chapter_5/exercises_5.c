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
	int min = 0;
	printf("Please enter the minute: ");
	scanf_s("%i", &min);

	while (min > 0)
	{
		printf("%d minutes = %d hours %d minutes! \n", min, min / SPVN, min % SPVN);
		printf("Please enter the minute:");
		scanf_s("%i", &min);
	}

	printf(" INPUT ERROR!");
}

/*
	Write a program that
	asks for an integer and then prints all the integers from (and including) that value up to (and including) a value larger by 10.
	(That is, if the input is 5, the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or newline.
*/

void selfadd(void)
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
	Write a program that
	asks the user to enter the number of days and then converts tha tvalue to weeks and days.
	For example, it would convert 18 days to 2 weeks, 4 days.
	Display results in the following format:

	18 days are 2 weeks, 4 days.

	Use a while loop to allow the user to repeatedly enter day values;
	terminate the loop when the user enters a nonpositive value, such as 0 or -20 .
*/

void dayconv(void)
{
	const int DAY_PER_WEEK = 7;
	int day;

	printf("Please enter a number (<=0 quit):");
	scanf_s("%i", &day);
	while (day > 0)
	{
		printf("%d days are %d weeks, %d days. \n\n", day, day / DAY_PER_WEEK, day % DAY_PER_WEEK);
		printf("Please enter a number (<=0 quit):");
		scanf_s("%i", &day);
	}
	printf("Process terminated!");
}

/*
	Write a program that
	asks the user to enter a height in centimeters and then displays the height in centimeters and in feet and inches.
	Fractional centimeters and inches should be allowed,
	and the program should allow the user to continue entering heights until a nonpositive value is entered.
	A sample run should look like this:

	Enter a height in centimeters: 182
	182.0 cm = 5 feet, 11.7 inches
	Enter a height in centimeters (<=0 to quit): 168.7
	168.0 cm = 5 feet, 6.4 inches
	Enter a height in centimeters (<=0 to quit): 0
	bye
*/

void lenconv(void)
{
	const float CM_PER_IN = 2.54;
	const float IN_PER_FT = 12.0;

	float cm, inch;
	int ft;

	printf("Enter a height in centimeters: ");
	scanf_s("%f", &cm);
	while (cm > 0)
	{
		inch = cm / CM_PER_IN;
		ft = (int)inch / IN_PER_FT;
		cm = (int)cm; // Be sure to show the input like "168.7" could show as "167.0"
		printf("%.1f cm = %d feet, %.1f inches \n", cm, ft, inch - ft * IN_PER_FT);
		printf("Enter a height in centimeters: ");
		scanf_s("%f", &cm);
	}
	printf("Bye!");
}


/*
	Change the program addemup.c ( Listing 5.13 ), which found the sum of the first 20 integers. 
	(If you prefer, you can think of addemup.c as a program that 
	calculates how much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the third day, and so on.) 
	Modify the program so that you can tell it interactively how far the calculation should proceed. 
	That is, replace the 20 with a variable that is read in.
*/

void br()
{

}