#include "main.h"

/**
 * is_prime_number - checks if a number is a prime
 *
 * @n: number to check
 *
 * Return: 1 if n is a prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_helper(n, 2));
}

/**
 * prime_helper - helper function for is_prime_number
 *
 * @n: number to check
 *
 * @i: number to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_helper(int n, int i);
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}
