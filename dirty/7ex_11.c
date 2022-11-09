/**
 * CHALLENGE
 *
 * A function array_sum() that takes two arguments:
 * an integer array and the number of elements in the
 * array. Have the function return as the result the
 * sum of elements in the array
 */

 #include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 size_t set_array[10], i, set_sum;

	 for (i = 0; i < 10; ++i)
	 {
		 printf("%s", "Enter n number : ");
		 scanf("%i", &set_array[i]);
	 }

	 set_sum = array_sum(set_array, 10);

	 for (i = 0; i < 10; ++i)
	 {
		 printf("%i ", set_array[i]);
	 }

	 array[10] = {2, 1, 3, 5, 6, 3, 7, 8, 9, 5};
	 nt sum = array_sum(array, 10);
   	 printf("Sum = %d\n", sum);

	 printf("Sum = %i \n%s\n", set_sum, "End");
 }
