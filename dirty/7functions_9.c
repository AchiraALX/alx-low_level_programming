#include "head.h"

/**
 * minimum - gets the minimum value from an array
 * 
 * Return: minimum value
*/

int minimum(int values[10])
{
	int minValue, i;

	minValue = values[0];

	for (i = 1; i < 10; ++i)
	{
		if (values[i] < minValue)
		{
			minValue = values[i];
		}
	}

	return minValue;
}

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int main(void)
{
	int numberOfScores;
	int scores[numberOfScores], i, minScore;

	printf("Enter the scores:  ");

	for (i = 0; i < 10; ++i)
	{
		scanf("%i", &scores[i]);
	}

	minScore = minimum(scores);
	printf("\nMinimum score id %i\n", minScore);

	return (0);
}