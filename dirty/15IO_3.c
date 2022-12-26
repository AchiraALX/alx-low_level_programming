#include <stdio.h>

/**
 * main - takes an input and outputs different results
 *
 * Return: Always (0) Success
*/

int main ()
{
	float d, half, square, cube;

	printf("Enter n number between 1 and 100:  ");
	scanf("%f", &d);

	half = d / 2;

	square = d * d;
	cube = d * d * d;

	printf("\nYou number is %.2f \n", d);
	printf("Half of it is %.2f \n", half);
	printf("Square it to get %.2f\n", square);
	printf("Cube it to get %.2f \n", cube);

	return (0);
}
