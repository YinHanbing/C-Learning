#include "lib_4.h"

//* talkback -- nosy, informative program */
void talkback(void)
{
	float weight, volume;
	int size, letters;
	char name[40];	// name is an array of 40 chars��39 chars for characters, and 1 for null cahracter which marks the end of a string.

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

	getchar();
}


//* praise1 -- uses an assortment of strings */
void praise1(void)
{
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name,sizeof name);	// ERROR: Crash after typing spaces, tabs, etc. behind the first word.
	printf("Hello, %s. %s\n", name, PRAISE);

	getchar();
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

	getchar();
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

	getchar();
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


/* printout.c -- uses conversion specifiers */
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

/* width -- field widths */
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


/* flags -- illustrates some formatting flags */
void flags(void)
{
	printf("%x %X %#x\n", 31, 31, 31);						// 1f 1F 0x1f
	printf("**%d**% d**% d**\n", 42, 42, -42);				// **42** 42**-42**
															// ADVICE: % d let the printf() print positive and negative values with the same numeber with the same field widths.
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);	// ** 6** 006**00006** 006**
															// in %05.3d, flag 0 was ignored because the 5.3 is a specific precision.
}


/* stringf -- string formatting */
void stringf(void)					// BLURB has 20 characters
{
	printf("[%2s]\n", BLURB);		// [Authentic imitation!]
	printf("[%24s]\n", BLURB);		// [    Authentic imitation!]
	printf("[%24.5s]\n", BLURB);	// [                   Authe]
	printf("[%-24.5s]\n", BLURB);	// [Authe                   ]
	
									// .5 tells printf() to print just 5 characters
}



