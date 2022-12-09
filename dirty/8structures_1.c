#include "head.h"

/**
 * main - prints today's date using structures
 *
 * Description: a program to illustrate structures
 *
 * Return: Always (0) Success
 */

 int main(void)
 {
	 struct date
	 {
		 int month, day, year;
	 };

	 struct date today;

	 today.month = 11;
	 today.day = 14;
	 today.year = 2022;

	 printf("%s %i / %i / %.2i.\n", "Today's date ", today.month, today.day, today.year % 100);

	 return (0);
 }
