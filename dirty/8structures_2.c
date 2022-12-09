#include "head.h"

/**
 * main - determines tommorow's date
 *
 * Return: Always (0) Success
 */

 int main(void)
 {
	 struct date
	 {
		 int month, day, year;
	 };

	 struct date today, tommorow;
	 const int day_per_month[12] = {
		 31, 28, 31, 30, 31, 30,
		 31, 31, 30, 31, 30, 31
	 };

	 printf("%s", "Enter today's date (mm dd yyyy): ");
	 scanf("%i %i %i", &today.month, &today.day, &today.year);

	 if (today.day != day_per_month[today.month - 1])
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

	 printf("%s %i / %i / %i\n", "Tommorow's date is ", tommorow.month, tommorow.day, tommorow.year);

	 return (0);
 }
