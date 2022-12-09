#include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 struct date today, next_day;

	 printf("%s", "Enter n date (mm dd yyyy) : ");
	 scanf("%i %i %i", &today.month, &today.day, &today.year);

	 next_day = date_update (today);

	 printf("%s %i / %i / %i. \n", "Tommorow's date is ", next_day.month, next_day.day, next_day.year % 100);

	 return (0);
 }
