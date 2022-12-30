#include "head.h"

/**
 * main - prints if two strings are equal
 *
 * Return: Always (0) Success
 */

 int main (void)
 {
	 const char stra[] = "string to compare";
	 const char strb[] = "string";

	 printf("%i\n", equal_strings(stra, strb));
	 printf("%i\n", equal_strings(stra, stra));
	 printf("%i\n", equal_strings(strb, "string"));

	 return (0);
 }
