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

/**
 * equal_strings - checks if two words match
 *
 * @s1: first word
 *
 * @s2: second word
 *
 * Return: true if they are equal and false eif otherwise
*/

bool equal_strings(const char s1[], const char s2[])
{
	int i = 0;
	bool are_equal;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		are_equal = true;
	}
	else
	{
		are_equal = false;
	}

	return (are_equal);
}

/**
 * lookup - looks up a specified word the dictionary
 *
 * @dictionary: struct dict
 *
 * @search: the word to be searched in the dict
 *
 * @entries: the number of entries in the dictionary
 *
 * Return: entry index or -1 if no matching word in the dict
*/

int lookup(const struct entry dictionary[], const char search[], const int entries )
{
	int i;

	for (i = 0; i < entries; ++i)
	{
		if ( equal_strings(search, dictionary[i].word) )
		{
			return (i);
		}
	}

	return (-1);
}


/* IMPLEMENTATION OF EQUAL_STRINGS */

/**
 * compare_strings - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if string are equal
*/

int compare_strings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;
	}

	if (s1[i] < s2[i])
	{
		answer = -1;
	}
	else if (s1[i] == s2[i])
	{
		answer = 0;
	}
	else
	{
		answer = 1;
	}

	return (answer);
}

/* IMPLEMENTATION OF LOOKUP */

/**
 * lookup - searches a given word in the dictionary structure
 *
 * @dictionary: structure array of words
 *
 * @search: word to be searched
 *
 * @entries: length of the dict
 *
 * Return: search index, -1 otherwise
*/

int i_lookup(const struct entry dictionary[], const char search[], const int entries)
{
	int low = 0;
	int high = entries - 1;
	int mid, result;

	while (low <= high)
	{
		mid = (low + high) / 2;
		result = compare_strings(dictionary[mid].word, search);

		if ( result == -1 )
		{
			low = mid + 1;
		}
		else if ( result == 1 )
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}

/**
 * str_to_int - converts a string of numbers to an integer
 *
 * @string: the string to be converted
 *
 * Return: converted string
*/

int str_to_int(const char string[])
{
	int i, int_value, result = 0;

	for (i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
	{
		int_value = string[i] - '0';
		result = (result * 10) + int_value;
	}

	return (result);
}