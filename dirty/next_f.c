#include "head.h"

/**
 * main - main function
 * 
 * Return: 0 success
*/

int main(void)
{
    int n1, n2, n3;

    n1 = next(365, 7);
    n2 = next(12258, 23);
    n3 = next(996, 4);

    if (next(19, 7) == 21)
    {
        printf("Test passed.\n");
        printf("n1 = %i\n", n1);
        printf("n2 = %i\n", n2);
        printf("n3 = %i\n", n3);

        return (0);
    }
    else
    {
        printf("Check is failing. You got it!");

        return (1);
    }
}