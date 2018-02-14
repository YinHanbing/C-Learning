#include "lib_3.h"

/*
	Find out what your system does with:

	integer overflow(上溢),
	floating-point overflow,
	floating-point underflow(下溢),
	by using the experimental approach;

	that is, write programs	having these problems.
	(You can check the discussion in Chapter 4 of limits.h and
	float.h to get guidance on the largest and smallest values.)
*/
void ouflow(void)
{

}


/*
	Write a program that
	asks you to enter an ASCII code value, such as 66,
	and then prints the character having that ASCII code.
*/
void codevalue(void)
{
	char ascii;

	printf("Please enter an ASCII code:");
	scanf_s("%hhd", &ascii);
	printf("The character of %d is %c", ascii, ascii);

	getchar();

	/*
		When using %d in scanf_s(), it will go on but shows：
		Have a Debug Error!
		Run-Time Check Failure #2 - Stack around the variable 'ascii' was corruptd.
	*/
}


/*
	Write a program that
	sounds an alert and then prints the following text:
	Startled by the sudden sound, Sally shouted,
	"By the Great Pumpkin, what was that!"
*/
void alert(void)
{
	printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"");
}


/*
	Write a program that
	reads in a floating-point number and prints it first in decimal-point notation,
	then in exponential notation, and then, if your system supports it, p notation.

	Have the output use the following format (the actual number of digits displayed for the
	exponent depends on the system):

	Enter a floating-point value: 64.25
	fixed-point notation: 64.250000
	exponential notation: 6.425000e+01
	p notation: 0x1.01p+6
*/
void fltnum(void)
{
	float num;

	printf("Please enter a float-point value: ");
	scanf_s("%f", &num);
	printf("fixed-point notation: %f\nexponential notation: %e\np notation: %a\n", num, num, num);

	getchar();
}


/*
	There are approximately 3.156 × 10 7 seconds in a year.

	Write a program that
	requests your age in years and then displays the equivalent number of seconds.
*/
void year_sec(void)
{
	int year;
	//	double sec = ;

	printf("Please enter your old in year form: ");
	scanf_s("%d", &year);
	printf("Wow, you're about %e seconds old!", 3.156e7 * year);

	getchar();
}


/*
	The mass of a single molecule(分子) of water is about 3.0×10-23 grams. A quart(夸脱) of water is about 950 grams.

	Write a program that
	requests an amount of water, in quarts,
	and	displays the number of water molecules in that amount.
*/
void molecules(void)
{
	float quart;

	printf("How much water do you have?\n");
	scanf_s("%f", &quart);
	printf("There are about %e water molecules in it.", quart * 950 / (3.0e-23));

	getchar();

}


/*
	There are 2.54 centimeters to the inch.

	Write a program that
	asks you to enter your height in inches and then
	displays your height in centimeters.
	Or, if you prefer,
	ask for the height in centimeters and convert that to inches.
*/
void height(void)
{
	float cm;

	printf("Please enter your height in centimeters:\n\tcm.\r");
	scanf_s("%f", &cm);
	printf("You're about $%.2f inches high.\n", cm / 2.54);

	getchar();
}


/*
	In the U.S. system of volume measurements,
	a pint is 2 cups,
	a cup is 8 ounces,
	an ounce is 2 tablespoons,
	a tablespoon is 3 teaspoons.

	Write a program that
	requests a volume in cups and that
	displays the equivalent volumes in pints, ounces, tablespoons, and teaspoons.

	Why does a floating-point type make more sense for this application than an integer type?
*/
void cups(void)
{
	double cup;

	printf("Please enter the number of cup:");
	scanf_s("%lf", &cup);
	printf("It equals:\n\t%f pints\n\t%f ounces\n\t%f tablespoons\n\t%f teaspoons.\n", cup * 2, cup / 8, cup / 16, cup / 48);

	getchar();
}