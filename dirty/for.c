#include "head.h"

/**
 * main - main function
 * 
 * Return: Always 0 (success)
*/

int main(void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    for (n = 1; n <= 200; n++)
    {
        triangularNumber += n;
    }

    printf("The 200th triangular number is %i\n", triangularNumber);
    return (0);
}