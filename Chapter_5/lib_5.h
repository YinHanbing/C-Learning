#pragma once
/*
	1. Division Operator: /
		--> Floating-type division gives a floating-point answer.
			Integer division yields an integer answer.
		--> Truncation -- Discard fraction resulting from integer division.
			5 / 3 = 1
			7. / 4. = 1.75

	2.	Modulus Operator: %
		--> It gives the remainder of two intergers:  13 % 5 = 3
		--> Used in integer arithmetic.
		--> a % b = a - (a/b)*b

	3.	Increment Operator: ++
		--> postfix: a++, a is changed after its value is used.
		--> prefix: ++b, b is changed before its value is used.
	
	4.	Tips:
		--> Don¡¯t use increment or decrement operators on a variable 
			that is part of more than one argument of a function.
		--> Don¡¯t use increment or decrement operators on a variable 
			that appears more than once in an expression.
*/


#include <stdio.h>

#define ADJUST 7.31	// one kind of symbolic constant
#define SQUARES 64	// squares on a checkerboard
#define SEC_PER_MIN 60 // seconds in a minute
#define MAX 100

//*--- Declaration of Functions in Examples ---*//

//* shoes1 -- converts a shoe size to inches */
void shoes1(void);

//* shoes2 -- calculates foot lengths for several sizes */
void shoes2(void);

//* golf -- golf tournament scorecard */
void golf(void);

//* squares -- produces a table of first 20 squares */
void squares(void);

//* wheat -- exponential growth */
void wheat(void);

//* divide -- divisions we have known */
void divide(void);

//* rules -- precedence test */
void rules(void);

//* sizeof -- uses sizeof operator */
// uses C99 %z modifier -- try %u or %lu if you lack %zd
void size(void);

//* min_sec -- converts seconds to minutes and seconds */
void minsec(void);

/* add_one -- incrementing: prefix and postfix */
void add_one(void);

//* post_pre -- postfix vs prefix */
void post_pre(void);

//* bottles -- decrementing: prefix */
void bottles(void);




//*--- Declaration of Functions in Programming Exercises ---*//
