#include "head.h"

/**
 * is_alpha - checks if a character is an alphabet
 *
 * @c: the character to be checked
 *
 * Return: true if it is an alphabet and false otherwise
 */

bool is_alpha(const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

/**
 * low_to_upper - takes a character c and changes it to uppercase
 *
 * @c: the character to be changed
 *
 * Return: Uppercase letter if the letter is lower and is actually
 * an alphabet
 */

char low_to_upper(char c)
{
	if ( (c >= 'a' && c <= 'z') && is_alpha (c) )
	{
		c = c - 32;
	}

	return (c);
}

/**
 * open_file - opens file in read mode
 *
 * @file: file name of the file to opened
 *
 * Return: file in success
*/

FILE *open_file(const char *file, const char * mode)
{
	FILE *in_file;

	if ( (in_file = fopen(file, mode)) == NULL )
	{
		if (mode[0] == 'r')
		{
			fprintf(stderr, "Can't reach the file you are trying to open");
		}
		else
		{
			fprintf(stderr, "Trouble opening the file you trying to write to\n");
		}

		exit(EXIT_FAILURE);
	}

	return (in_file);
}

/**
 * count_lines - counts the lines of a specified file
 *
 * @file: the file whose line are to be counted
 *
 * Return: int (number of lines)
 */

int count_lines(FILE *file)
{
	int c, count;

	count = 0;

	while ( (c = getc(file)) != EOF )
	{
		if (c == '\n')
		{
			count++;
		}
	}

	return count;
}


/**
 * write_lines - writes line alternatively
 *
 * @file_1: first file
 *
 * @file_2: second file
 *
 * Return: 0 if success
*/

int write_lines(FILE *file_1, FILE *file_2, int lines)
{
	int c, b, d;
	/* FILE *in_3; */

	b = 0;
	/* in_3 = open_file("middle.me", "w"); */

	while (lines != 0)
	{
		while ( (c = getc(file_1)) != EOF && b == 0 )
		{
			printf("%c", c);
			if (c == '\n')
			{
				b = 1;
			}
		}
		while ( (d = getc(file_2)) != EOF && b == 1 )
		{
			printf("%c", d);
			if (c == '\n')
			{
				b = 0;
			}
		}

		--lines;
	}

	return (0);
}
