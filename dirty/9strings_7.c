#include "head.h"

/* funtions used */

bool alphabetic (const char c);
int count_words (const char string[]);
/**
 * main - main function
 *
 * Return: Always (0) Success
 */

int main (void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "...And here we go... again.";

	printf("%s -> words = %i\n", text1, count_words(text1));
	printf("%s -> words = %i\n", text2, count_words(text2));

	return (0);
}

/**
 * count_words - gets the number of words in a text
 *
 * @string: text
 *
 * Return: number of words
 */

int count_words (const char string[])
{
	int i, word_count;
	bool looking_for_word;

	looking_for_word = true;
	word_count = 0;

	for (i = 0; string[i] != '\0'; ++i)
	{
		if ( alphabetic(string[i]) )
		{
			if (looking_for_word)
			{
				++word_count;
				looking_for_word = false;
			}
		}
		else
		{
			looking_for_word = true;
		}
	}

	return (word_count);
}

/**
 * alphabetic - returns true if the character is an alphabet
 *
 * @c: character to be determined
 *
 * Return: true if the characteris and alphabet false otherwise
 */

bool alphabetic (const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (true);
	}
	else
	{
		return (false);
	}
}
