#include "head.h"

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int z_matrix[3][5] = {
		{ 7, 16, 55, 13, 12 },
		{ 12, 10, 52, 0, 7 },
		{ -2, 1, 2, 4, 9 }
	};

	printf("%s\n", "Original matrix : \n");
	displayMatrix(3, 5, z_matrix);

	scalarMultiply(3, 5, z_matrix, 2);
	printf("%s\n", "Multiplied by 2 : \n");
	displayMatrix(3, 5, z_matrix);

	scalarMultiply(3, 5, z_matrix, -1);
	printf("%s\n", "Multiply by -1 : \n");
	displayMatrix(3, 5, z_matrix);

	return (0);
}

/**
 * scalarMultiply - multiplies given matrix by given scaly
 *
 * @nRows: number of rows in the matrix
 *
 * @nCols: number of columns in the matrix
 *
 * @matrix: the matrix
 *
 * @scalar: the scalar multiple
 *
 * Return: void
 */

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
	int row, column;

	for (row = 0; row < nRows; ++row)
	{
		for (column = 0; column < nCols; ++column)
		{
			matrix[row][column] *= scalar;
		}
	}
}

/**
 * displayMatrix - displays to the stdout
 *
 * @nRows: number of rows
 *
 * @nCols: number of columns
 *
 * @matrix: the matrix
 *
 * Return: void
 */

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
	int row, column;

	for (row = 0; row < nRows; ++row)
	{
		for (column = 0; column < nCols; ++column)
		{
			printf("%5i", matrix[row][column]);
		}

		printf("\n");
	}
}

