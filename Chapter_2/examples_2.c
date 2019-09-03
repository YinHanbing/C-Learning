#include "lib_2.h"

//* first -- The first program */
void first(void)	// a simple program 
{
	int num;	// define a variable called num 
	num = 1;	// assign a value to num 
	printf("I am a simple ");	// use the printf() function 
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);
}


//* fathm_ft -- converts 2 fathoms to feet */
void fathm_ft(void)
{
	int feet, fathoms;	// multiple declarations
	fathoms = 2;
	feet = 6 * fathoms;	// multiplicaion
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
}


//* two_func.c -- a program using two functions in one file */
void butler(void)	// start of function definition
{
	printf("You rang, sir?\n");
}
void two_func(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
}