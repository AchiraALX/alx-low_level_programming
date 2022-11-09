#include "head.h"

/**
 * calculate_triangular_number - calculates the nth triangular number
 * 
 * Return: void
*/

void calculate_triangular_number(int n)
{
	int i, triangular_number = 0;

	for (i = 1; i <= n; ++i)
	{
		triangular_number += i;
	}

	printf("Triangular number %i is %i\n", n, triangular_number);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/
int main(void)
{
	calculate_triangular_number(10);
	calculate_triangular_number(20);
	calculate_triangular_number(30);

	return (0);
}