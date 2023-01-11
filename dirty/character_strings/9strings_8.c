#include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) Success
*/

int main (void)
{
	char text[81];
	int total_words = 0;
	int count_words (const char string[]);
	void read_line (char buffer[]);
	bool end_of_text = false;

	printf ("Type in your text.\n");
	printf ("When you are done, press 'RETURN'.\n\n");

	while ( ! end_of_text )
	{
		read_line (text);
		if ( text[0] == '\0' )
			end_of_text = true;
		else
			total_words += count_words (text);
	}

	printf ("\nThere are %i words in the above\
	text.\n", total_words);

	return (0);
}