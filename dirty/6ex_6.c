/**
 * CHALLENGE
 * 
 * Find fibonacci number without using arrays
 * use three variables, two to hold the last two 
 * values and the other to hold the current one
*/

#include "head.h"

/**
 * main - fibonacci numbers
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int i, num, x, y, z;
	unsigned long long int sum;

	printf("Enter n number:  ");
	scanf("%i", &num);

	sum = 0;
	x = 0;
	y = 1;

	for (i = 0; i <= num; ++i)
	{
		if (i > 1)
		{
			z = x + y;
			sum = z;

			x = y;
			y = z;

		}
		else
		{
			if (i == 1)
			{
				sum = 1;
			}
			else
			{
				sum = 0;
			}
		}
		
		printf("%i \t\t\t %lu\n", i, sum);
	}

		return (0);
}