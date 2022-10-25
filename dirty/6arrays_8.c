#include "head.h"

/**
 * main - generates fibonacci numbers using variable length arrays
 *
 * Return: (0) for success (1) for failure
 */

int main(void)
{
	int i, numFibs;

	/* get input */
	printf("Enter n number 1 - 75:  \n ");
	scanf("%lu", &numFibs);

	/* check if the input is greater than 75 or less than 1 */
	if (numFibs < 1 || numFibs > 75)
	{
		printf("Bad number, sorry!\n");
		return (1);
	}

	unsigned long long int fib[numFibs];
	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < numFibs; ++i)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}

	for (i = 0; i < numFibs; ++i)
	{
		printf("%lu ", fib[i]);
	}

	printf("\n");

	return (0);
}
