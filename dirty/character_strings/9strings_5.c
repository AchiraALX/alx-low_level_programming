#include "head.h"

/**
 * main - reads and displays a text in the terminal
 *
 * Return: Always (0) Success
 */

 int main(void)
 {
	 char s1[81], s2[81], s3[81];

	 printf("%s\n", "Enter a text:  \n");
	 scanf("%s %s %s", s1, s2, s3);

	 printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);

	 return (0);
 }
