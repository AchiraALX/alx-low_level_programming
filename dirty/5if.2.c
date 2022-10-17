#include "head.h"

/**
 * main - calculates the average of a set of grades and count the number
 * of failing grades.
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
        int num;

        printf("Enter the number of grades to evaluate:  ");
        scanf("%i", &num);

        failing_grades(num);

        return (0);
}