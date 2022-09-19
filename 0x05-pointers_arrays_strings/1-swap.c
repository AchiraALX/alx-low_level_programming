#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: int pointer type
 * @b: int pointer type
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
  /* x temporarily holds the value of a which is later assigned to b */
	*a = *b;
	*b = x;
}
