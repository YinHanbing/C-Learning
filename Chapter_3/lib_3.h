#pragma once
#include <stdio.h>
#include <inttypes.h>	// support portable type 

/*
	* Keywords:
	  int, short, long, unsigned, char, float, double, _Bool, _Complex, _Imaginary
	* Oprator:
	  sizeof
	* Function:
	  scanf()
	* The basic data types that C uses
	* The distinctons between integer types and floating-point types
	* Writing constants and declaring variables of those types
	* How to use the printf() and scanf() functions to read and write values of different types
*/

/*--- Declaration of Functions in Examples ---*/

//* platinum -- your weight in platinum */
void pltinum(void);

//* print1 -- diaplays some properties of printf() */
void print1(void);

//* toobig -- exceeds maximum int size on our system */
void toobig(void);

//* print2 -- more printf() properties */
void print2(void);

//* charcode -- displays code number for a character */
void charcode(void);

//* altnames -- protable names for integer types */
void altnames(void);

//* showf_pt -- displays float value in two ways */
void showf_pt(void);

//* folaterr -- demonstrates round-off error */
void floaterr(void);

//* typesize -- prints out type sizes */
void typesize(void);

//* badcount -- incorrect arguemet counts */
void badcount(void);

//* escape -- uses escape character */
void escape(void);


/*--- Declaration of Functions in Programming Exercises ---*/

//* exercise_1 overflow -- displays the overflow and underflow of some datatypes */
void overflow(void);

//* exercise_2 codevalue -- displays code number for a character */
void codevalue(void);

//* exercise_3 alert -- displays texts with an alert */
void alert(void);

//* exercise_4 fltnum -- displays float-point number in different notations */
void fltnum(void);

//* exercise_5 year_sec -- converts years into seconds */
void year_sec(void);

//* exercise_6 molecules -- converts grams into molecules */
void molecules(void);

//* exercise_7 height -- converts centimeters into inches */
void height(void);

//* exercise_8 cups -- conserts cups into other measurements */
void cups(void);