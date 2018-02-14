#include "lib_4.h"

//* talkback -- nosy, informative program */
#define DENSITY 62.4	// human density in lbs per cu ft (人体密度：磅/立方英尺)

void talkback(void)
{
	float weight, volume;
	int size, letters;
	char name[40];	// name is an array of 40 chars，39 chars for characters, and 1 for null cahracter which marks the end of a string.

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
#define PRAISE "You are an extraordinary being."

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
#define PI 3.14159

void pizza(void)
{
	float area, circum, radius;	// 面积，周长，半径

	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0 * PI * radius;

	printf("Your basic pizza paramenters are as follow:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	getchar();
}
