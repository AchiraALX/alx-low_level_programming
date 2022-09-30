#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minmum number of coins
 * to make change for an amount of money
 *
 * @argc: number of arguments
 *
 * @argv: arrar of arguments
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
		}
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
				coins++;
			}
			else if (cents >= 10)
			{
				cents -= 10;
				coins++;
			}
			else if (cents >= 5)
			{
				cents -= 5;
				coins++;
			}
			else if (cents >= 2)
			{
				cents -= 2;
				coins++;
			}
			else if (cents >= 1)
			{
				cents -= 1;
				coins++;
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
