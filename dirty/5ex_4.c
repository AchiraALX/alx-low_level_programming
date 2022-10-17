/**
 * CHALLENGE
 * 
 * Write a program that acts a s a simple 'printing' calculator
 * the user should be allowed to type in expressions in the form
 * 
 * number operator
 * 
 * Following operators should be recognized by the calculator
 * 
 * + - * / S E
 * 
 * S - set the accumulator to typed-in number
 * E - signals the end of execution
 * 
 * the calculations are performed on the contents of the accumulator
 * with the number keyed in acting as a second operand
 * 
 * *Sample output*
 * 
 * Begin calculation
 * 10 S - sets the accumulator to 10
 * = 10.0   *contents of the accumulator*
 * 2 / -- divide by 2
 * = 5.000   *contents of the accumulator*
 * 55 - subtracts 55
 * 0 E *end of the program*
*/

#include "head.h"

/**
 * main - simple printing calculator
 * 
 * Return: Always (0) Success
*/

int main(void)
{
        float accumulator, operand;
        char op;
        int i;

        printf("If you wish to quit the process, use 'E' as an operator.\n");
        accumulator = 0.0;
        i = 1;

        for (i = 1; i <= 100; i++)
        {
                printf("Enter an expression:  ");
                scanf("%f %c", &operand, &op);

                if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'S')
                {
                        accumulator = operator(accumulator, op, operand);
                }
                else
                {
                        if (op == 'E')
                        {
                                printf("Exiting program.\n");
                                break;
                        }
                        else
                        {
                                printf("You are caught off guard.");
                                break;
                        }
                }
                
        }
        

        return (0);
}