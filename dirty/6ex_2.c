/* ARRAY ELEMENTS AS COUNTERS */
#include "head.h"

/**
 * main - demonstrates an array of counters
 *
 * Return: Always (0) Success
*/

int main(void)
{
	int ratingCounter[11], i, response, max_rating;

	max_rating = 5;

	for (i = 1; i <= max_rating; ++i)
	{
		ratingCounter[i] = 0;
	}

	printf("Enter your responses\n");

	do
	{
		scanf("%i", &response);

		if ((response < 0 && response != 999) || response > max_rating)
		{
			printf("Bad response: %i\n", response);
		}
		else
		{
				++ratingCounter[response];
		}

	} while (response != 999);

	printf("\n\nRating \t\t\t Number of responses\n");
	printf("---------- \t\t ---------------------------\n");

	for (i = 1; i <= max_rating; ++i)
	{
		printf("%4i \t\t\t %4i\n", i, ratingCounter[i]);
	}

	return (0);
}