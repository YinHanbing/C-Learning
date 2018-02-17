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
	--------------------------------------------------------------------------------------------------------
	2.	The printf() Modifiers
		digit(s)	--> The MINIMUM FIELD WIDTH (will be expanded automaticlly when the field is not enough)
		.digit(s)	--> %e, %E, %f: The NUMBER of digits to be printed to the RIGHT of the decimal.
					--> %g, %G:		The MAXIMUM NUMBER of significant digits.
					--> %s:			The MAXIMUM NUMBER of characters to be printed.
					--> integer:	The MINIMUM NUMBER of digits to appear
	--------------------------------------------------------------------------------------------------------
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
	--------------------------------------------------------------------------------------------------------
	4.	SHORT INT(2 Bytes):
		2 bytes = 16 bits		2^16 = 65536	65536/2 = 32768

		4.1	TWO��S COMPLEMENT for signed integers:
			[0,32767]		--> positive numbers[0 ~ 32767]
			[32768,65536]	--> negative numbers[-32678 ~ -1]
		
			for unsigned int:	64577 = 64577
			for signed int:		64577 = 64577 - 65536 = -959

		4.2	if:
				an integer(65618) > maximun short int(32767)
				(65618: 4-byte int)
			then:
				%hd: tell printf() to use only the last 2 bytes.
					 = 65618 % 65536 = 82

			a % b = c
			0 <= c <= 32767		--> c = c
			32767 <= c <= 65536	--> c = -c
	--------------------------------------------------------------------------------------------------------
	5.	CHAR(1 byte):
		1 byte = 8 bit		2 ^ 8 = 256 [0,255]

		if: 
			char(65618) > maximum char(255)
		then:
			%c: make printf() look at only 1 out of the bytes used to hold 65618.
				65618 in binary: 00000001 00000000 01010010
				01010010:		 82 in binary
				82:				 ASCII code of 'R'
	--------------------------------------------------------------------------------------------------------
	6.	FLOAT(4 bytes):

		6.1	float is converted to doubule(8 bytes) when used as arguements to printf().
		6.2	%e make printf() expect a type double value(8 bytes)
	--------------------------------------------------------------------------------------------------------
	7.	Return value of printf() function:
		--> The number of characters it printed.
		Characters: printed characters, spaces, unseen newline character.

		When there is an output error: 
		--> Returns a negative value.
	--------------------------------------------------------------------------------------------------------
	8.	Printing long string:
		8.1 End with out a \n character
			printf("abc ");
			printf("def.\n");	--> abc def.
		8.2	Terminate the end of the first line with a backslash/return combination:
			pirntf("abc \
			def.\n");			--> abc def.
		8.3 ANCI-C-intrduced string concatenation:
			printf("abc "     "def"".");	--> abc def.
	--------------------------------------------------------------------------------------------------------

*/


#define DENSITY 62.4	// human density in lbs per cu ft
#define PRAISE "You are an extraordinary being."
#define PI 3.14159
//#define PI_1 3.141593
#define PAGES 959
#define BLURB "Authentic imitation!"	// 20 characters in quotes
//#define PAGES_1 336
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

/* intconv -- some mismatched integer conversions */
void intconv(void);

/* floatcnv -- mismatched floating-point conversions */
void floatcov(void);

/* prntval -- finding printf()'s return value */
void prntval(void);

/* longstrg �C�C printing long strings */
void longstrg(void);


/*--- Declaration of Functions in Programming Exercises ---*/
