/**
 * status -> Solved
 * 
 * CHALLENGE
 * 
 * The program 5bool.c has several inefficiencies and that include checking for
 * even numbers. Because it is obvious that even numbers greater than two
 * cannot be prime numbers, the program could simply skip all even numbers
 * as possible and divisors as possible.
 * The inner for loop is also inefficient because the value of p is always 
 * divided by all of d from two through p - 1.
 * The inefficiency could be avoided by adding the value of isPrime in the
 * conditions of the for loops. in this manner the for loop could be set to 
 * continue as long as no divisor was found and the value of d was less the p
 * 
 * Modify the program to incorporate these two changes.
*/

#include "head.h"

/**
 * main - checks for the prime numbers in range  2 through n
 * 
 * @n: the limit to check for prime number
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int n, p, d;
	bool isPrime;
	printf("Enter any number:  ");
	scanf("%i", &n);

	for (p = 2; p <= n; p++)
	{
		isPrime = true;

		if (p % 2 == 0)
		{
			continue;
		}
		else
		{
			for (d = 2; d < p && isPrime != false; d++)
			{
				if ( p % d == 0)
				{
					isPrime = false;
					break;
				}
				if (isPrime)
				{
					printf("%i ", p);
					break;
				}
			}
		}
	}

	return (0);
}
