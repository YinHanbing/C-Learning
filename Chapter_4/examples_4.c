#include "lib_4.h"

//* talkback -- nosy, informative program */
void talkback(void)
{
	float weight, volume;
	int size, letters;
	char name[40];	// name is an array of 40 chars，39 chars for characters, and 1 for null character which marks the end of a string.

	printf("Hi! What's your first name?\n");
	scanf_s("%s", name, sizeof(name));	// 'sizeof(name)' is important. scanf_s() require the buffer size to be specified for all input parameters of type c,C,s,S.
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
}

//* praise1 -- uses an assortment of strings */
void praise1(void)
{
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name,sizeof name);	// ERROR: Crash after typing spaces, tabs, etc. behind the first word.
	printf("Hello, %s. %s\n", name, PRAISE);
}

//* praise2 -- uses an assortment of strings */
// try the %u or %lu specifiers if your implementation does not recognize the %zd specifier
void praise2(void)
{	
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name,sizeof(name));	// ERROR: Crash after typing spaces, tabs, etc. behind the first word.
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", 
			strlen(name), sizeof(name));
	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
}

//* pizza -- uses defined constants in a pizza context */
void pizza(void)
{
	float area, circum, radius;	 

	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0 * PI * radius;

	printf("Your basic pizza paramenters are as follow:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
}

//* defines -- uses defined constants from limit.h and float */
//Needs limits.h and float.h additionally
void defines(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);
}

//* printout.c -- uses conversion specifiers */
void printout(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number, pies);
	printf("The value of pi id %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing.\n");
	printf("%c%d\n", '$', 2 * cost);
}

//* width -- field widths */
// #define PAGES 959
// 959 is a 3 digits long integer
void width(void)
{
	printf("*%d*\n", PAGES);	// *959*
	printf("*%2d*\n", PAGES);	// *959*
	printf("*%10d*\n", PAGES);	// *       959*
	printf("*%010d*\n", PAGES);	// *0000000959*
	printf("*%-10d*\n", PAGES);	// *959       *
}

//* floats -- some floating-point combinations */
void floats(void)
{
	const double RENT = 3852.99;	// const-style constant

	printf("*%#.f*\n", RENT);	// *3853.*
	printf("*%f*\n", RENT);			// *3852.990000*
	printf("*%e*\n", RENT);			// *3.852990e+03*
	printf("*%4.2f*\n", RENT);		// *3852.99*
	printf("*%3.1f*\n", RENT);		// *3852.0*
	printf("*%10.3f*\n", RENT);		// *  3852.990*
	printf("*%10.3E*\n", RENT);		// * 3.853E+03*
	printf("*%#10.E*\n", RENT);		// *    4.E+03*
	printf("*%+4.2f*\n", RENT);		// *+3852.99*
	printf("*%010.2f*\n", RENT);	/* 
									   *0003852.99*
										first 0 is a flag, 
										digits between this 0 and period(.) specify the field width.
									*/
}

//* flags -- illustrates some formatting flags */
void flags(void)
{
	printf("%x %X %#x\n", 31, 31, 31);						// 1f 1F 0x1f
	printf("**%d**% d**% d**\n", 42, 42, -42);				// **42** 42**-42**
															// ADVICE: % d let the printf() print positive and negative values with the same numeber with the same field widths.
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);	// ** 6** 006**00006** 006**
															// in %05.3d, flag 0 was ignored because the 5.3 is a specific precision.
}

//* stringf -- string formatting */
void stringf(void)					// BLURB has 20 characters
{
	printf("[%2s]\n", BLURB);		// [Authentic imitation!]
	printf("[%24s]\n", BLURB);		// [    Authentic imitation!]
	printf("[%24.5s]\n", BLURB);	// [                   Authe]
	printf("[%-24.5s]\n", BLURB);	// [Authe                   ]
									// .5 tells printf() to print just 5 characters
}

//* intconv -- some mismatched integer conversions */
void intconv(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short:   %hd %hu\n", num, num);	// 959 959
	printf("-num as short and unsigned short:   %hd %hu\n", mnum, mnum);	// -959 64577
	printf("num as int and char: %d %c\n", num, num);	// 959 ?
														// the character of ACSII code 959 is '?' 
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);	// 65618 82 R
																				// printf("%hd", 65618); = 65618 % 65536 = 82
}

//* floatcnv -- mismatched floating-point conversions */
void floatcov(void)
{
	float n1 = 3.0;			// n1 8 bytes in stack
							// float is converted to doubule when used as arguements to printf().
	double n2 = 3.0;		// n2 8 bytes in stack
	long n3 = 2000000000;	// n3 4 bytes in stack
	long n4 = 1234567890;	// n4 4 bytes in stack
	
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);	// %e make printf() expect a type double value(8 bytes)
	printf("%ld %ld\n", n3, n4);	// correct output 
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);	// %ld make prinf() read 4 bytes, ERROR!
}

//* prntval -- finding printf()'s return value */
void prntval(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);	// rv = printf(...); 
															// prints information and assigns a value to a variable.
	printf("The printf() function printed %d characters.\n", rv);
}

//* longstrg –– printing long strings */
void longstrg(void)
{
	printf("Here's onr way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");
	printf("Here's the newest way to print a "
		"long string.\n");	// ANSI C
}

//* input -- when to use & */
void input(void)
{
	int age;	// variable
	float assets;	// variable 
	char pet[30];	// string

	printf("Enter your age, assets, and favourite pet.\n");
	scanf_s("%d %f", &age, &assets);	// use the & here
	scanf_s("%s", pet, sizeof(pet));	// no & for char array
	printf("%d $%.2f %s\n", age, assets, pet);
}

//* varwid.c -- uses variable-width output field */
void varwid(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width:\n");
	scanf_s("%d", &width);
	printf("The number is :%*d\n", width, number);	// *: spicify the field width
													// d: assign the arguement "number"
	printf("Now enter a width and a precision:\n");
	scanf_s("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);	// "%*(width).*(precision)f"
	printf("Done!\n");
}

//* skiptwo -- skips over first two integers of input */
void skiptwo(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);	// skip two integers and copy the third into n
	printf("The last integer was %d\n", n);
}