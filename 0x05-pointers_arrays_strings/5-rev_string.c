#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	/* gets each character in a string */
	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	/* carries the reversing process */
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		/* h temporarily stores the character on the process */
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
