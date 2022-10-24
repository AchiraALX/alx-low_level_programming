#include "head.h"

/**
 * main - testing letter arrays
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!', ' ', 'I', ' ', 'l', 'i', 'k', 'e', ' ', 'p', 'i', 'z', 'z', 'a', '.' };
	int i, p;

	for (i = sizeof(word) - 1; i >= 0; --i)
	{
		if (i % 2 != 0)
		{
			printf("%c", word[i]);
		}
		else
		{
			continue;
		}
	}

	printf("\n");

	for (p = 0; word[p] != '.'; p++)
	{
		;
	}

	for ( ; p >= 0; --p)
	{
		printf("%c", word[p]);
	}

	return (0);
}
