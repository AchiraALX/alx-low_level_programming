#include "head.h"

unsigned long int factorials (unsigned int n);

int main(void)
{
	unsigned  int j, x, y;

	printf("Enter n number:  ");
	scanf("%u", &x);

	y = 0;

	if (! (x < y) && x < 33)
	{
		for (j = 0; j < x; ++j)
		{
			printf("%2u! = %lu\n", j, factorials(j));
		}
	}
	else
	{
		printf("Bad! Enter a value that is 0 - 33!");
	}
	return (0);
}

/**
* factorial - gets the factorial of a number
 *
 * Return: factorial
*/

unsigned long int factorials (unsigned int n)
{
	unsigned long int result;

	if (n == 0)
	{
		result = 1;
	}
	else
	{
		result = n * factorials(n-1);
	}

	return (result);
}
