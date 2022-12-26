#include <stdio.h>

/**
 * main - takes a number and outputs several results
 *
 * Return: Always (0) Success
*/

int main ()
{
	float d, half, square, cube;

	d = 6.5;

	half = d/2;
	square = d * d;
	cube  = d * d * d;

	printf("\nYour number is %.2f \n", d);
	printf("Half of it is %.2f \n", half);
	printf("Square it to get %.2f \n", square);
	printf("Cube it to get %.2f \n", cube);

	return (0);
}