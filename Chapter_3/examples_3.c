#include "lib_3.h"


//* platinum -- your weight in platinum */
void pltinum(void)
{
	float weight;	// user weight
	float value;	// platinum equivalent

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	// get input from the user
	scanf_s("%f", &weight);	// %f: make scanf() read a floating-number from keyboard, &weight: weight = input value
	// assume platinum is $1700 per ounce
	// 14.5833 converts pounds adv. (avoirdupois) to ounces troy 
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	getchar();
}

//* print1 -- diaplays some properties of printf() */
void print1(void)
{
	int ten = 10;
	int	two = 2;

	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);	// forget 2 arguements
}


//* toobig -- exceeds maximum int size on our system */
void toobig(void)
{
	int i = 2147483647;	// int begins at -2147483648
	unsigned int j = 4294967295;	// unsigned int begins at 0, ends at 4294967295

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);
}


//* print2 -- more printf() properties */
/*
	int          --> %d
	unsigned int --> %u
	long         --> %ld
	long (OCT)   --> %lo
	long (HEX)   --> %lx
	short        --> %hd
	short (OCT)  --> %ho
	short (HEX)  --> %hx
*/
void print2(void)
{
	unsigned int un = 3000000000;	// system with 32-bit int
	short end = 200;	// and 16-bit short
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);
}


//* charcode -- displays code number for a character */
void charcode(void)
{
	char ch;

	printf("Please enter a character.\n");
	scanf_s("%c", &ch);	// user input character (case sensitive)
	printf("The code for %c is %d.\n", ch, ch);
	getchar();
}

//* altnames -- protable names for integer types */
void altnames(void)
{
	int32_t me32;	// me32 a 32-bit signed variable

	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make ant assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32);
}

//* showf_pt -- display float value in two ways */
void showf_pt(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);	// use %e to print in exponential notation 
	// next line requires C99 or later compliance
	printf("And it's %a in hexadecimal, power of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
}


//* folaterr -- demonstrates round-off error */
void floaterr(void)
{
	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);
	/*	The output is this:
		0.000000				<-- older gcc on Linux
		-13584010575872.000000	<-- Turbo C 1.5
		4008175468544.000000	<-- XCode 4.5, Visual Studio 2012, current gcc
	*/
}

//* typesize -- prints out type sizes */
void typesize(void)
{
	// C99 provides a %zd specifier for sizes
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
}

//* badcount -- incorrect arguemet counts */
void badcount(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);	// too many arguements
	printf("%d %d %d\n", n);	// too few arguements
	printf("%d %d\n", f, g);	// wrong kind of values
}


//* escape -- uses escape character */
void escape(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");	// \a --> beep
	printf(" $_______\b\b\b\b\b\b\b");	// \b --> backspace
	scanf_s("%f", &salary);	// \n --> new line
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);	// \t --> tab
	printf("\rGee!\n");	// \r --> Carriage return, which positions the cursor at the begining of the current line.

	getchar();
}