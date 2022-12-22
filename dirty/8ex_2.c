#include "head.h"

int sub(int a, int b)
{
	return a - b;
}

/**
* main - the main function
 *
 * Return: Always (0) Success
*/

int main (void)
{
	struct date d_now, d_then;
	int days;

	printf("%s", "Enter the date to count from  (mm dd yyyy) : ");
	scanf("%i %i %i", &d_now.month, &d_now.day, &d_now.year);
	printf("%s", "To (mm dd yyyy) : ");
	scanf("%i %i %i", &d_then.month, &d_then.day, &d_then.year);

	if (date_check(d_now) && date_check(d_then))
	{
		days = day_difference(d_now, d_then);
		printf("%i\n", days);
	}
	else
	{
		date_check(d_now);
		date_check(d_then);
	}

	return (0);
}
