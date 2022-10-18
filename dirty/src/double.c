#include "main.h"

/**
 * doubled - doubles numbers
 *
 * @num: numer to be doubled
 *
 * Return: doubled mumber
 */

int doubled(int *num)
{
	int *ptr;

	ptr = num;

	return(*ptr * 2);
}

/**
 * main - calls other functions
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 5;
	
	printf("The number doubled is : %d\n", doubled(&num));

	return (0);
}
