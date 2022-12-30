#include "head.h"

/**
 * main - prints the length of different strings
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 const char w1[] = {'a', 's', 't', 'e', 'o', '\0'};
	 const char w2[] = {'j', 'a', 'c', 'o', 'b', '\0'};
	 const char w3[] = {'s', 'u', 'c', 'k', '\0'};
	 const char w4[] = {'t', '\0'};

	 printf("%i  %i  %i  %i\n", string_length(w1), string_length(w2), string_length(w3), string_length(w4));

	 return (0);
 }
