/**
 * CHALLENGE
 *
 * Modifying program 7functions_12.c to take an argument
 * indicating whether the array is to be sorted in
 * descending or ascending order
 * then modify the program to correctly sort the array
 * in the desired order
 */

 #include "head.h"

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

  int main(void)
  {
	  size_t i;
	  int set_array[5] = { 7, 6, 2, 3, 10};
	  sort(set_array, 5, 2);

	  for (i = 0; i < 5; ++i)
	  {
		  printf("%i\n", set_array[i]);
	  }

	  printf("\n");

	  return (0);
  }
