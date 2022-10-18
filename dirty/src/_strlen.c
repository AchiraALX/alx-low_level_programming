#include "main.h"

/**
 * _strlen - gets length of a string
 *
 * @str: string of chars
 *
 * Return length of string
 * or -1 something went wrong
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL) return (-1);

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

int main(void)
{
	char *str = "Hello world, Jacob Achira Obara";
	int len = 0;

	len = _strlen(str);

	printf("The length of the string is: %d\n", len);

	return (0);
}
