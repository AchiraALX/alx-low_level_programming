/**
 * CHALLENGE
 *
 * Modifying a program 6arra_1.c and set the elements
 * of the array to initially 0 using a for loop
 */
#include "head.h"

/**
 * main - working with arrays
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int values[10], index;

	for (index = 0; index < 10; ++index)
	{
		values[index] = index;
		printf("%1 %i", index, values[index]);
	}

	return (0);
}

