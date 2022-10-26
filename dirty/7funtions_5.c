#include "head.h"

/**
 * gcd - gets the gcd of two nonnegative integers
 * 
 * Return: void
*/

void g_c_d(int u, int v)
{
	int temp;

	printf("The Greatest Common Divisor of %i and %i is ", u, v);

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("%i\n", u);
}

int main(void)
{
	g_c_d(10, 15);

	return (0);
}