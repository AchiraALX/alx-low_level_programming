#include "head.h"

/**
 * main - structure in c
 *
 * Return: Always (0) Success
*/

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 9;
	today.day = 25;
	today.year = 2022;

	printf("Today's date is %i/%i/%.2i.", today.month, today.day, today.year);

	return (0);
}