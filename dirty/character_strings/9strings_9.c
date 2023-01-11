#include "head.h"

/**
 * main - main function
 *
 * Return: Always (0) Success
*/

int main (void)
{
	const struct entry dictionary[100] = {
	    {"aardvark", "a burrowing African mammal"},
	    {"abyss", "a bottomless pit"},
	    {"acumen", "mentally sharp; keen"},
	    {"addle", "to become confused"},
	    {"aerie", "a high nest"},
	    {"affix", "to append; attach"},
	    {"agar", "a jelly made from seaweed"},
	    {"ahoy", "a nautical call of greeting"},
	    {"aigrette", "an ornamental cluster of feathers"},
	    {"ajar", "partially opened"}};

	char word[15];
	int entries = 10;
	int entry;

	printf("Enter a word :  ");
	scanf("%14s", word);

	entry = lookup(dictionary, word, entries);

	if ( entry != -1 )
	{
		printf("%s\n", dictionary[entry].definition);
	}
	else
	{
		printf("\"%s\" not in my dictionary. \n", word);
	}

	return (0);
}