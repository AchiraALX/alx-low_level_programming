/**
 * CHALLENGE
 * 
 * Write a program that takes in keyed integers, extracts the
 * and displays each digit of integer in english.
 * 
 * Example if 932 is keyed, the program should display
 * nine three two
*/

#include "head.h"

/**
 * main - main function
 * 
 * Return: Always (0) Success
*/

int first_int(int num);
char *check_num(int num);

int main(void)
{
        int number;
        char *s;

        printf("Enter number: ");
        scanf("%i", &number);

        number = first_int(number);

        s = check_num(number);
        printf("%s \n %i", s, number);

        return (0);
}

int first_int(int num)
{
        num = num / 10;

        return num;
}

/**
 * check_num - checks a number and give it appropriate english name
 * 
 * Return: english name
*/

char *check_num(int num)
{
        char *en_name;

        switch (num)
        {
        case 0:
                en_name = "zero ";
                break;

        case 1:
                en_name = "one ";
                break;

        case 2:
                en_name = "two ";
                break;

        case 3:
                en_name = "three ";
                break;

        case 4:
                en_name = "four ";
                break;

        case 5:
                en_name = "five ";
                break;

        case 6:
                en_name = "six ";
                break;

        case 7:
                en_name = "seven ";
                break;

        case 8:
                en_name = "eight ";
                break;

        case 9:
                en_name = "nine ";
                break;

        default:
                en_name = "unknown case ";
                break;
        }

        return en_name;
}