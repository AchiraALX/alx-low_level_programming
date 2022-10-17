#include "head.h"

/**
 * main - generates a table of prime numbers 2 through n
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        int p, d, n;
        bool isPrime;

        printf("Enter the n number:  ");
        scanf("%i", &n);
        
        for ( p = 2; p <= n; ++p ) 
        {
                isPrime = true;
                
                for ( d = 2; d < p; ++d )
                        if ( p % d == 0 )
                                isPrime = false;
                        if (isPrime)
                                printf ("%i ", p);
        }
        printf("\n");
        return (0);
}