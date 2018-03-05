#include "lib_5.h"

//* shoes1 -- converts a shoe size to inches */
void shoes1()
{
	const double SCALE = 0.333;	// another kind of symbolic constant
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's)    foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);
}

//* shoes2 -- calculates foot lengths for several sizes */
void shoes2(void)
{
	const double SCALE = 0.333;	// another kind of symbolic constant
	double shoe, foot;

	printf("Shoe size (men's)    foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)	// starting the while loop
	{					// start of bolck
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}					// end of block
	printf("If the shoe fits, wear it.\n");
}


//* golf -- golf tournament scorecard */
void golf(void)
{
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("                  cheeta   tarzan    jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
}


//* squares -- produces a table of first 20 squares */
void squares(void)
{
	int num = 1;

	while (num < 21)	// Uses a counter to control a while loop
	{
		printf("%4d %6d\n", num, num*num);
		num = num + 1;
	}
}


//* wheat -- exponential growth */
void wheat(void)
{
	const double CROP = 2E16;	// world wheat production in wheat grains
	double current, total;
	int count = 1;

	printf("squate     grains       total     ");
	printf("franction of \n");
	printf("           added        grains    ");
	printf("world total\n");

	total = current = 1.0;	// start with one grain

	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;	// double grains on next square
		total = total + current;	// update total 

		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}
	printf("That's all.\n");
}


//* divide -- divisions we have known */
void divide(void)
{
	printf("integer division:  5/4   is %d \n", 5 / 4);
	printf("integer division:  6/3   is %d \n", 6 / 3);
	printf("integer division:  7/4   is %d \n", 7 / 4);
	printf("floating division: 7./4. is %1.2lf \n", 7. / 4.);
	printf("mixed division:    7./4  is %1.2lf \n", 7. / 4);
}


/* rules -- precedence test */
void rules(void)
{
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("top = %d,score = %d\n", top, score);
}


//* sizeof -- uses sizeof operator */
void size(void)
{
	int n = 0;
	size_t intsize; // sizeof returns a value of type size_t

	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);
}


// min_sec.c -- converts seconds to minutes and seconds
void minsec(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf_s("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;	// truncated number of minutes
		left = sec % SEC_PER_MIN;	// number of seconds left over
		printf("%d seconds id %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &sec);
	}
	printf("Done!\n");

	getchar();
}


/* add_one -- incrementing: prefix and postfix */
void add_one(void)
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;
		++ultra;
		printf("super = %d, ultra = %d \n", super, ultra);
	}
}


//* post_pre -- postfix vs prefix */
void post_pre(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	// value of a++ during assignment phase
	pre_b = ++b;	// value of ++b during assignment phase
	printf("a   a_post  b    pre_b \n");
	printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);
}


//* bottles -- decrementing: prefix */
void bottles(void)
{
	int count = MAX + 1;

	while (--count > 0)
	{
		printf("%d bottles of spring water on the wall, "
			"%d bottles of spring water!\n", count, count);
		printf("Takes one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n", count - 1);
	}
}