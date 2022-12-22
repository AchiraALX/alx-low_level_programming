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
	 int tst[5];
	 size_t i;

	 int matrix[4][5] = {
		 { 1, 7, 3, 4, 5 },
		 { 6, 3, 4, 5, 1 },
		 { 3, 4, 5, 1, 2 },
		 { 4, 5, 1, 2, 3 },
	 };

	 transpose_matrix(4, 5, matrix);

	 return (0);
 }
