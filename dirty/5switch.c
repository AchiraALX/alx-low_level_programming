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
        scanf("%f %c %f", &num1, &operator, &num2);

        switch (operator)
        {
                case '+':
                        printf("%f %c %f = %f", num1, operator, num2, num1 + num2);
                        break;

                case '-':
                        printf("%f %c %f = %f", num1, operator, num2, num1 - num2);
                        break;

                case '*':
                case 'x':
                        printf("%f x %f = %f", num1, num2, num1 * num2);
                        break;

                case '/':

                        if (num1 == 0 || num2 == 0)
                        {
                                printf("Division by zero.");
                        }
                        else
                        {
                                printf("%f %c %f = %f", num1, operator, num2, num1 / num2);
                        }

                        break;
                        
                default:
                        printf("No matching operator.");
                        break;
        }

        return (0);
}