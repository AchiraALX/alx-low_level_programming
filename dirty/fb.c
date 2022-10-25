#include "head.h"

/**
 * main - array variable length
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int i, num;

	printf("Enter n number: ");
	scanf("%i", &num);

	if (num < 1 || num > 20)
	{
		printf("Your input sucks!\n");
		return (1);
	}

	unsigned long long int sums[num];
	for (i = 0; i <= num; ++i)
	{
		if (i < 2)
		{
			sums[i] = i;
		}
		else
		{
			sums[i] = sums[i - 2] + sums[i - 1];
		}

		printf("%i \t\t\t %i\n", i, sums[i]);
	}

	return (0);
}
