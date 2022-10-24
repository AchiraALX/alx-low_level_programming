/**
 * USING ARRAY TO GENERATE PRIME NUMBERS
*/

#include "head.h"

/**
 * main - generate prime numbers
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int p, i, primes[50], primeIndex = 2;
	bool isPrime;

	primes[0] = 0;
	primes[1] = 1;

	for (p = 5; p <= 50; p = p + 2)
	{
		isPrime = true;

		for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
		{
			if (p % primes[i] == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime)
		{
			primes[primeIndex] = p;
			++primeIndex;
		}
	}

	for (i = 0; i < primeIndex; ++i)
	{
		printf("%i\n", primes[i]);
	}

	printf("\n");

	return (0);
}