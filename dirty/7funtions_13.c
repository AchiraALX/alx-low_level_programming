/**
 * NOTES
 * main() routine calls scalarMultiply() routine twice
 * After the call, the array is passed to the 
 * displayMatrix() routine to display the contents
 * of the array
*/
#include "head.h"

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

void scalarMultiply(int matrix[3][5], int scalar);
void displayMatrix(int matrix[3][5]);

int main(void)
{
	int z_matrix[3][5] = {
	    {7, 16, 55, 13, 12},
	    {12, 10, 52, 0, 7},
	    {-2, 1, 2, 4, 9}};

	printf("Original matrix: \n");
	displayMatrix(z_matrix);

	scalarMultiply(z_matrix, 2);
	printf("\nMultiplied by 2: \n");
	displayMatrix(z_matrix);

	scalarMultiply(z_matrix, -1);
	printf("\nMultiplied by -1: \n");
	displayMatrix(z_matrix);

	return (0);
}

/**
 * scalarMultiply - multiplies a 3 x 5 array by a scalar
 * 
 * @matrix[3][5]: the array of type int
 * 
 * @scalar: the constant type int
 * 
 * Return: void
*/

void scalarMultiply(int matrix[3][5], int scalar)
{
	int row, column;

	for (row = 0; row < 3; ++row)
	{
		for (column = 0; column < 5; ++column)
		{
			matrix[row][column] *= scalar;
		}
	}
}

/**
 * display - write the values to stdout
 * 
 * @matrix[3][5]: 2-d array
 * 
 * Return: void
*/

void displayMatrix(int matrix[3][5])
{
	int row, column;

	for (row = 0; row < 3; ++row)
	{
		for (column = 0; column < 5; ++column)
		{
			printf("%5i ", matrix[row][column]);
		}

		printf("%s", "\n");
	}
}