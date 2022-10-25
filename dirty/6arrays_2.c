/* ARRAY ELEMENTS AS COUNTERS */
#include "head.h"

/**
 * main - demonstrates an array of counters
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        int ratingCounter[11], i, response, number_of_responses, max_rating;
        printf("Enter total number of your responses\n");
        scanf("%i", &number_of_responses);

        max_rating = 5;

        for (i = 1; i <= max_rating; ++i)
        {
                ratingCounter[i] = 0;
        }

        printf("Enter your responses\n");

        for (i = 1; i <= number_of_responses; ++i)
        {
                scanf("%i", &response);

                if (response < 0 || response > max_rating)
                {
                        printf("Bad response: %i\n", response);
			++number_of_responses;
                }
                else
                {
                        ++ratingCounter[response];
                }
        }

        printf("\n\nRating \t\t\t Number of responses\n");
        printf("---------- \t\t ---------------------------\n");

        for (i = 1; i <= max_rating; ++i)
        {
                printf("%4i \t\t\t %4i\n", i, ratingCounter[i]);
        }

        return (0);
}