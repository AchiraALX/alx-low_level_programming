#include "head.h"

/**
 * operate - works out arithmetic expressions.
 * 
 * Return: accumulator
*/

float operator(float accumulator, char operator, float operand)
{
        switch (operator)
        {
                case 'S':
                        accumulator = operand;
                        break;
                case '+':
                        accumulator += operand;
                        break;
                case '-':
                        accumulator -= operand;
                        break;
                case '*':
                        accumulator *= operand;
                        break;
                case '/':
                        if (operand == 0 || accumulator == 0)
                        {
                                printf("Division by zero.\n");
                        }
                        else
                        {
                                accumulator /= operand;
                        }
                        break;
        }
        
        printf(" = %.3f\n", accumulator);

        return accumulator;
}