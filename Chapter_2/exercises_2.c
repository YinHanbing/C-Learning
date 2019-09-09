#include "lib_2.h"

/*
	Write a program that uses one printf() call to print your first name and last name on one line.
	Use a second printf() call to print your first and last names on two separate lines.
	Use a pair of printf() calls to print your first and last names on one line.
	The output should look like this (but using your name):

	Gustav Mahler <-- First print statement
	Gustav		  <-- Second print statement
	Mahler		  <-- Still the second print statement
	Gustav Mahler <-- Third and fourth print statements
*/
void t_name(void)
{
	printf("Hanbing Yin\n");
	printf("Hanbing\nYin\n");
	printf("Hanbing ");
	printf("Yin\n");

}

/*
	Write a program to print your name and address.
*/
void t_ad(void)
{
	printf("I am Hanbing Yin, I live in China.\n");
}

/*
	Write a program that converts your age in years to days and displays both values.
	At this point, don’t worry about fractional years and leap years.
*/
void t_year_day(void)
{
	int year, day;
	
	year = 23;
	day = year * 365;
	printf("I am %d years old, also %d days old.\n", year, day);
}

/*
	Write a program that produces the following output:

	For he's a jolly good fellow!
	For he's a jolly good fellow!
	For he's a jolly good fellow!
	Which nobody can deny!

	Have the program use two user-defined functions in addition to main() : 
	One named jolly() that prints the "jolly good" message once.
	One named deny() that prints the final line once.
*/
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

void t_fellow(void)
{
	jolly();
	jolly();
	jolly();
	deny();
}

/*
	Write a program that produces the following output:

	China, India, Brazil, Russia
	Brazil, Russia
	China, India,

	Have the program use two user-defined functions in addition to main() : 
	One named br() that prints "Brazil, Russia" once.
	One named ci() that prints "China, India" once. 
	Let main() take care of any additional printing tasks.
*/
void ci(void)
{
	printf("China, India\n");
}

void br(void)
{

	printf("Brazil, Russia,\n");
}

void t_country(void)
{
	printf("China, India, Brazil, Russia\n");
	br();
	ci();
}

/*
	Write a program that creates an integer variable called toes.
	Have the program set toes to 10.
	Also have the program calculate what twice toes is and what toes squared is. 
	The program should print all three values, identifying them.
*/
void t_toes(void)
{
	int toes, dtoes, toes2;
	toes = 10;
	dtoes = toes * 2;	// double toes
	toes2 = toes * toes;
	printf("The number of toes is %d, two times it makes %d, and its square is %d.\n", toes, dtoes, toes2);
}

/*
	Many studies suggest that smiling has benefits. 
	Write a program that produces the following output:

	Smile!Smile!Smile!
	Smile!Smile!
	Smile!

	Have the program define a function that displays the string Smile! once.
	And have the program use the function as often as needed.
*/
void smile(void)
{
	printf("Smile!");
}

void t_smile(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
}

/*
	In C, one function can call another. 
	Write a program that calls a function named one_three().
	This function should display the word one on one line, call a second function named two() , and then display the word 'three' on one line.
	The function two() should display the word two on one line. 
	The main() function should display the phrase starting now: before calling one_three() and display done! after calling it.
	Thus, the output should look like the following:

	starting now:
	one
	two
	three
	done!
*/
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}

void t_count(void)
{
	printf("stating now:\n");
	one_three();
	printf("done!");
}