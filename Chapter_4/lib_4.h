#pragma once
#include <stdio.h>
#include <string.h>	// for strlen() prototype
#include <float.h>	// floating-point limits
#include <limits.h>	// integer limits

/*
	1.	Parentheses in sizeof():
		using size of a type				--> sizeof(int)
		using size of a particular quantity --> sizeof 6.28 or sizeof(6.28)
		Advice: always sizeof()

	2.	The printf() Modifiers
		digit(s)	--> The MINIMUM FIELD WIDTH (will be expanded automaticlly when the field is not enough)
		.digit(s)	--> %e, %E, %f: The NUMBER of digits to be printed to the RIGHT of the decimal.
					--> %g, %G:		The MAXIMUM NUMBER of significant digits.
					--> %s:			The MAXIMUM NUMBER of characters to be printed.
					--> integer:	The MINIMUM NUMBER of digits to appear
	3.	The printf() Flags
		-		--> Left-justified: "%-20s"
		+		-->	positive: display with a "+"
				--> negative: display with a "-"
		space	--> psostive: display with a leading space " "
				--> negative: display with a "-"
		#		--> %o:		  produce an initial 0
				--> %x, %X:	  produce an initial 0x or 0X
				--> %g, %G:	  keep trailing zeros
				--> floating-point: guarantees a "." character is printed
		0		--> numeric forms:  pad the field width with leading zeros.
				--> integer forms:	IGNORED: a - flag or a specific precision is present.
*/


#define DENSITY 62.4	// human density in lbs per cu ft
#define PRAISE "You are an extraordinary being."
#define PI 3.14159
//#define PI_1 3.141593
#define PAGES 959
#define BLURB "Authentic imitation!"	// 20 characters in quotes
#define PAGES_1 336
#define WORDS 65618


/*--- Declaration of Functions in Examples ---*/

//* talkback -- nosy, informative program */
void talkback(void);

//* praise1 -- uses an assortment of strings */
void praise1(void);

//* praise2 -- uses an assortment of strings */
void praise2(void);

//* pizza -- uses defined constants in a pizza context */
void pizza(void);

//* defines -- uses defined constants from limit.h and float */
void defines(void);

/* printout -- uses conversion specifiers */
void printout(void);

/* width -- field widths */
void width(void);

// floats -- some floating-point combinations
void floats(void);

/* flags -- illustrates some formatting flags */
void flags(void);

/* stringf -- string formatting */
void stringf(void);



/*--- Declaration of Functions in Programming Exercises ---*/
