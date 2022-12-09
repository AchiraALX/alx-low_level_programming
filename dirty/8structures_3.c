#include "head.h"

/**
 * main - determines tommorow's date in accordance with
 * leap year or not
 *
 * Return: Always (0) Success
 */

 int main(void)
 {
	 struct date today, tommorow;

	 printf("%s", "Enter today's date (mm dd yyyy) : ");
	 scanf("%i %i %i", &today.month, &today.day, &today.year);

	 if (today.day != number_of_days (today))
	 {
		 tommorow.day = today.day + 1;
		 tommorow.month = today.month;
		 tommorow.year = today.year;
	 }
	 else
	 {
		 if (today.month == 12)
		 {
			 tommorow.day = 1;
			 tommorow.month = 1;
			 tommorow.year = today.year + 1;
		 }
		 else
		 {
			 tommorow.day = 1;
			 tommorow.month = today.month + 1;
			 tommorow.year = today.year;
		 }
	 }

	 printf("%s %i / %i / %.2i.\n", "Tommorow's date is ", tommorow.month, tommorow.day, tommorow.year % 100);

	 return (0);
 }
