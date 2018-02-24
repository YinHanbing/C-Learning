#include "lib_4.h"

/*
	Write a program that
	asks for your first name, your last name,
	and then prints the names in the format last, first .
*/
void namecov(void)
{
	char fname[10], lname[10];

	printf("Plase enter you first and last name:\n");
	scanf_s("%s %s", fname, sizeof(fname), lname, sizeof(lname));
	printf("Hello,%s %s!", lname, fname);

	getchar();
}

/*
	Write a program that
	requests your first name and does the following with it:
	a. Prints it enclosed in double quotation marks
	b. Prints it in a field 20 characters wide, with the whole field in quotes and the name at the right end of the field
	c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
	d. Prints it in a field three characters wider than the name
*/
void varname(void)
{
	char fname[10];

	printf("Please enter your firsr name: ");
	scanf_s("%s", fname, sizeof(fname));
	printf("\"%s\"\n", fname);
	printf("\"%20s\"\n", fname);
	printf("\"%-20s\"\n", fname);
	printf("\"%s   \"\n", fname);

	getchar();
}


/*
	Write a program that
	reads in a floating-point number
	and prints it first in decimal-point notation and then in exponential notation.

	Have the output use the following formats(the number of digits shown in the exponent may be different for your system):
	a. The input is 21.3 or 2.1e+001 .
	b. The input is +21.290 or 2.129E+001 .
*/
void fnum(void)
{
	double num = 21.29;

	printf("It's %.1lf or %e\n", num, num);
	printf("Also %+.3lf or %.3E", num, num);

}


/*
	Write a program that requests your height in inches and your name,
	and then displays the information in the following form:
	Dabney, you are 6.208 feet tall

	Use type float , and use / for division.
	If you prefer, request the height in centimeters and display it in meters.
*/
void higtcov(void)
{
	char name[10];
	float height;

	printf("Please enter your name and height in centimeters: \n");
	scanf_s("%s %f", name, sizeof(name), &height);
	printf("%s, you're %.3f meters tall.\n", name, height / 100);

	getchar();

}


/*
	Write a program that
	requests the download speed in megabits per second (Mbs) andthe size of a file in megabytes (MB).
	The program should calculate the download time for the file. Note that in this context one byte is eight bits.

	Use type float, and use / for division.
	The program should report all three values (download speed, file size, and download time) showing two digits to the right of the decimal point,
	as in the following:
	At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
*/
void dtime(void)
{
	float dspd, fsize;
	printf("Please enter the download speed(Mbs): ");
	scanf_s("%f", &dspd);
	printf("Please enter the file size(MB):	");
	scanf_s("%f", &fsize);
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", dspd, fsize, (fsize * 8) / dspd);

	getchar();
}

/*
	Write a program that requests the user¡¯s first name and then the user¡¯s last name.
	Have it print the entered names on one line and the number of letters in each name on the following line.
	Align each letter count with the end of the corresponding name, as in the following:

	Melissa Honeybee
		  7		   8

	Next, have it print the same information, but with the counts aligned with the beginning
	of each name.

	Melissa Honeybee
	7		8
*/
//#include <string.h>
void namechar(void)
{
	char fname[10], lname[10];
	int fname_length, lname_length;

	printf("Please enter your first name: \n");
	scanf_s("%s", fname, sizeof(fname));

	getchar();

	printf("Please enter your last name: \n");
	scanf_s("%s", lname, sizeof(lname));

	getchar();

	fname_length = strlen(fname);
	lname_length = strlen(lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", fname_length, fname_length, lname_length, lname_length);

	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", fname_length, fname_length, lname_length, lname_length);
}

/*
	Write a program that
	sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0.
	Display each result three times:
	once showing four digits to the right of the decimal,
	once showing 12 digits to the right of the decimal,
	and once showing 16 digits to the right of the decimal.

	Also have the program include float.h and display the values of FLT_DIG and DBL_DIG.
	Are the displayed values of 1.0/3.0 consistent with these values?
*/
//#include <float.h>
void dfval(void)
{
	float fvalue = 1.0 / 3.0;
	double dvalue = 1.0 / 3.0;

	printf("For the result of 1.0/3.0:\n");
	printf("The float value is %.4f, the double value is %.4f.\n", fvalue, dvalue);
	printf("The float value is %.12f, the double value is %.12f.\n", fvalue, dvalue);
	printf("The float value is %.16f, the double value is %.16f.\n", fvalue, dvalue);
	printf("The FLT_DIG value is %d, the DBL_DIG value is %d.\n", FLT_DIG, DBL_DIG);

}

/*
	Write a program that asks the user to enter the number of miles traveled and the number of gallons of gasoline consumed.
	It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal.
	Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 kilometers,
	it should convert the mile-per-gallon value to a liters-per-100-km value,
	the usual European way of expressing fuel consumption, and display the result, showing one place to the right of the decimal.

	Note that the U.S. scheme measures the distance traveled per amount of fuel (higher is better),
	whereas the European scheme measures the amount of fuel per distance (lower is better).
	Use symbolic constants (using const or #define ) for the two conversion factors.
*/
void fulcos(void)
{
	const float LIT_PER_GAL = 3.785;
	const float KM_PER_MILE = 1.609;

	float mile, gallon, km, liter;

	printf("please enter your travel distance(miles): ");
	scanf_s("%f", &mile);

	getchar();

	printf("Please enter your total fule consumption(gallon): ");
	scanf_s("%f", &gallon);

	getchar();

	printf("Your vehicle could run %.1f miles using one gallon, ", mile / gallon);

	km = mile * KM_PER_MILE;
	liter = gallon * LIT_PER_GAL;

	printf("feul consumption is %.1f liters per 100km.\n", (100 * liter) / km);
}
