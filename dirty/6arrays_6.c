#include "head.h"

/**
 *main - introducing character arrays
 *
 * Return: Always (0) Success
*/

int main(void)
{
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int i;

	for (i = 0; i < 6; ++i)
	{
		printf("%c", word[i]);
	}

	printf("\n");

	return (0);
				
}
