#include "head.h"

 void read_line(char buffer[]);

 /**
  * main - main function
  *
  * Return: Always (0) Success
  */

 int main (void)
 {
	 int i;
	 char line[81];

	 for (i = 0; i < 3; ++i)
	 {
		 read_line(line);
		 printf("%s\n\n", line);
	 }

	 return (0);
 }

 /**
  * read_line - reads line of text from the terminal
  *
  * @buffer: array of characters entered in the terminal
  *
  * Return: void
  */

 void read_line(char buffer[])
 {
 	char character;
	int i;

	i = 0;
	do
	{
		character = getchar();
		buffer[i] = character;
		++i;

	} while(character != '\n');

	buffer[i - 1] = '\0';
 }
