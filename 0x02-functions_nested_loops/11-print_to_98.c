#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers fron a given number n to 98
 * @n: type int number
 * Return: always 0 (Success)
 */

void print_to_98(int n)
{
	int x;

	while (x >= n && x <=98)
	{
		printf("%i, ");
		x++;
	}
}
