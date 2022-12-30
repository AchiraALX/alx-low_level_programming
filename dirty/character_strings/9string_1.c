#include "head.h"

/**
 * main - string concatenation
 *
 * Return: Alway (0) Success
 */

int main(void)
{
	const char s1[5] = {'T', 'e', 's', 't', ' '};
	const char s2[6] = {'w', 'o', 'r', 'k', 's', '.'};
	char s3[11];

	concat(s3, s1, 5, s2, 6);

	for (i = 0; i < 11; ++i)
	{
		printf("%c", s3[i]);
	}

	return (0);
}
