#include "head.h"

/**
 * main - main function
 * 
 * Return: void
*/

int main(void)
{
    float sol, x;

    x = 1.0;

    sol = poly(x);

    printf("When x is %f, y = %f\n", x, sol);

    if (sol == 6.0)
    {
        printf("Worked baby!");
        return (0);
    }
    else
    {
        printf("Not quite right. Can you try again!");
        return (1);
    }
}