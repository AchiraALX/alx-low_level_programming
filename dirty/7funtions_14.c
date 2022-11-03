#include "head.h"

/* GLOBAL VARIABLES */

int converted_number[64];
long int number_to_convert;
int base;
int digit = 0;

/**
 * get_number_and_base - get the number to be converted and the
 * base to be converted to from the user
 *
 * Return: void
 */

void get_number_and_base(void)
{
	printf("%s\n", "Enter n number : ");
	scanf("%li", &number_to_convert);

	printf("%s\n", "Enter base to convert to (2 - 16)");
	scanf("%i", &base);

	if (base < 2 || base > 16)
	{
		printf("%s\n", "Bad base - enter a number between 2 and 16");
		base = 10;
	}
}

/**
 * convert_number - does calculation of changing the base
 *
 * Return: void
 */

void convert_number(void)
{
	do
	{
		converted_number[digit] = number_to_convert % base;
		++digit;
		number_to_convert /= base;
	} while (number_to_convert != 0);
}

/**
 * display_converted_number - displays the converted number in the
 * correct sequence
 *
 * Return: void
 */

void display_converted_number(void)
{
	const char base_digits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', 
		'9', 'A', 'B', 'C', 'D', 'E', 'F' };
	
	int next_digit;
	printf("%s", "Converted number = ");
	for (--digit; digit >= 0; --digit)
	{
		next_digit = converted_number[digit];
		printf("%c", base_digits[next_digit]);
	}

	printf("\n");
}

/**
 * main - function caller
 *
 * Return: void
 */

int main(void)
{
	get_number_and_base();
	convert_number();
	display_converted_number();

	return (0);
}

