#include "head.h"

/**
 * main - main function
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int dollars, cents, count;

        for (count = 1; count <= 10; ++count)
        {
                printf("Enter dollars:  ");
                scanf("%i", &dollars);
                printf("Enter cents:  ");
                scanf("%i", &cents);
                printf("$%i.%.2i\n\n", dollars, cents);
        }

        return (0);
}