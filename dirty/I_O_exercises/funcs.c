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
 * file_length - gets the length of the specified file
 *
 * @file: file to be determined
 *
 * Return: int (length of the file)
*/

int file_length(const char * file)
{
	int count, c;

	count = 0;

	while ( (c = getc(file)) != EOF )
	{
		++count;
	}

	return (count);
}
