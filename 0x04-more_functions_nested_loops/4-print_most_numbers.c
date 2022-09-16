#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, not including 2 and 4.
 * Description: Can only use _putchar twice.
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
      /* I felt like using continue here */
			_putchar(i + '0');

		i++;
	}
	_putchar('\n');
}
