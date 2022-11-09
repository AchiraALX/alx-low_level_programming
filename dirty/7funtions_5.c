#include "head.h"

/**
 * gcd - gets the gcd of two nonnegative integers
 * 
 * Return: void
*/

int g_c_d(int u, int v)
{
	int temp;

	printf("The Greatest Common Divisor of %i and %i is ", u, v);

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return (temp);
}

int main(void)
{
	int g_cd;

	g_cd = g_c_d(3, 5);

	printf("%i\n", g_cd);

	return (0);
}