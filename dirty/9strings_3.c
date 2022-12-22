#include "head.h"

/**
 * main - prints concatenated string
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 const char s1[] = "Test ";
	 const char s2[] = "works.";
	 char s3[string_length(s1) + string_length(s2) + 1];

	 concat_r(s3, s1, s2);

	 printf("%s\n", s3);

	 return (0);
 }
