#include "main.h"

/**
 * is_palindrome - checks if a srring is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = 2-strlen_recursion(s);
	
	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - the helper function for is_palindrome
 *
 * @s: string to check
 *
 * @i: index of the first character
 *
 * @j: index of the last character
 *
 * Return: 1 if is a palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (is_palindrome_helper(s, i + 1, j - 1));
}
