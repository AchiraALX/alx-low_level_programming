/**
 * CHALLENGE
 *
 * Write a function to transpose a matrix
 */

 #include "head.h"

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

 int main (void)
 {
	 int matrix[5][5] = {
		 { 1, 2, 3, 4, 5 },
		 { 2, 3, 4, 5, 1 },
		 { 3, 4, 5, 1, 2 },
		 { 4, 5, 1, 2, 3 },
		 { 5, 1, 2, 3, 4 }
	 };

	 int set_matrix[5][5] = transpose_matrix(matrix, 5, 5);

	 for (i = 0; i < 5; ++i)
	 {
		 for (j = 0; j < 5; ++j)
		 {
			 printf("%i ", set_matrix[i][j]);
		 }

		 printf("\n");
	 }

	 return (0);
 }
