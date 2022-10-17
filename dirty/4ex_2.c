/**
 * CHALLENGE
 * 
 * Triangular number can also be found by triangularNumber = n (n + 1) / 2
 * for any integer n. Write a program that generates
 * every fifth triangular number between 5 and 50 (5, 10, 15, ...., 50)
*/

#include "head.h"

int main(void)
{
        int base, triangularNumber;

        base = 5;
        triangularNumber = 0;

        printf("\tNum\t\t\tTriangular Number.\n");

        do
        {

                triangularNumber = base * (base + 1) / 2;
                printf("\t %i\t\t\t\t%i\n", base, triangularNumber);
                base += 5;

        } while (base <= 50);

        printf("\nBreak me down baby... it worked.");
        return (0);
}