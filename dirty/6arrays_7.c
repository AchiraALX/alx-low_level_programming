#include "head.h"

/**
 * main - handles the base conversion of numbers
 *
 * Return: Always (0) Success
 */

#include <stdio.h>
int main (void)
{
	const char baseDigits[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int convertedNumber[64];
	long int numberToConvert = 247361;
	int nextDigit, base = 16, index = 0;

	/* convert to the indicated base */
	do {
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	}
	while ( numberToConvert != 0 );

	/* display the results */
	printf("Converted number = ");

	for (--index; index >= 0; --index)
	{
		nextDigit = convertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");

	return (0);
}
