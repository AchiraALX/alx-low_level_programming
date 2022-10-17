#include "head.h"

/**
 * main - calculates the sum of number n's digits
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n, sum;
        printf("Enter a number n:  ");
        scanf("%i", &n);

        sum = 0;

        while (n != 0)
        {
                sum += n % 10;
                n /= 10;
        }

        printf("Sum = %i", sum);

        return (0);
}