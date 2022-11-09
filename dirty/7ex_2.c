/**
 * CHALLENGE
 * 
 * Formatting the 7functions_4.c program so the value
 * of the triangularNumber is returned by the function.
 * 
 * Formatting the 4looping_5.c program so that it can
 * call calculate_triangular_number_x()
*/
#include "head.h"

/**
 * calculate_triangular_number_x - calculates
 * nth triangular number
 * 
 * Return: triangular_number_x
*/

int calculate_triangular_number_x(int n)
{
	int i, triangular_number_x = 0;

	for (i = 0; i <= n; ++i)
	{
		triangular_number_x += i;
	}

	return (triangular_number_x);
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int n, number, triangular_number, counter;

	printf("How many checks : ");
	scanf("%i", &n);
	printf("\nWELCOME TO TRIANGULAR NUMBER CALC\n\n");

	for (counter = 0; counter <= n; ++counter)
	{
		printf("Enter n number :  ");
		scanf("%i", &number);

		triangular_number = calculate_triangular_number_x(number);
		printf("The triangular number of %i is %i.\n", number, triangular_number);
	}

	return (0);
}

