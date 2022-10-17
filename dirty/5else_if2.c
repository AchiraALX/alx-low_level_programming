#include "head.h"

/**
 * main - gets a result of expression by determined operator
 * and numbers
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        float num1, num2;
        char operator;

        printf("Enter the expression:  ");
        scanf("%f %c %f", &num1, &operator, & num2);

        if (operator == '+')
        {
                printf("%f %c %f = %.2f", num1, operator, num2, num1 + num2);
        }
        else if (operator == '-')
        {
                printf("%f %c %f = %.2f", num1, operator, num2, num1 - num2);
        }
        else if (operator == '*')
        {
                printf("%f x %f = %.2f", num1, num2, num1 * num2);

        }
        else if (operator == '/')
        {
                if (num1 == 0 || num2 == 0)
                {
                        printf("Division by zero.");
                }
                else
                {

                        printf("%f %c %f = %.2f", num1, operator, num2, num1 / num2);

                }
        }

        else
        {
                printf("Unkown operator.");
        }

        return (0);
}