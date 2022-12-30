#include "head.h"

/**
 * alphabetic - checks if a character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: true if the character is an alphabet
*/

bool alphabetic (const char c)
{
        if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
                return true;
        else
                return false;
}

/**
 * read_line - reads one line of a text
 *
 * @buffer: character string
 *
 * Return: void
*/

void read_line (char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );

	buffer[i - 1] = '\0';
}

/**
 * count_words - counts words in a text
 *
 * @string: text to be counted
 *
 * Return: Number of words
*/

int count_words (const char string[])
{
	int i, word_count = 0;
	bool lookingForWord = true, alphabetic (const char c);
	for ( i = 0; string[i] != '\0'; ++i )
		if ( alphabetic(string[i]) )
		{
			if ( lookingForWord )
			{
				++word_count;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

	return (word_count);
}