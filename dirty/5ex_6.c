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

char *first_int(int num);
char *check_num(int num);

int main(void)
{
        int number, i = 0;
        char *s, *se;

        printf("Enter number: ");
        scanf("%i", &number);

        s = first_int(number);
        for (i = 0; s[i] != '\0'; i++)
        {
		if (s[i] == '0')
		{
			printf("zero");
			continue;
		}
		else
		{
			se = check_num(s[i]);
                	printf("%s ", se);
		}
        }

        return (0);
}

/**
 * first_int - converts the type int passed in to a array of characters
 * 
 * Return: array of characters
*/

char *first_int(int num)
{
	int len = snprintf(NULL, 0, "%d", num);
        /* Creates memory for the terminator by adding one byte of the heap */
	char *str = malloc(len + 1);
        snprintf(str, len + 1, "%d", num);

        return (str);
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
                case '1':
                        en_name = "one";
                        break;

                case '2':
                        en_name = "two";
                        break;

                case '3':
                        en_name = "three";
                        break;

                case '4':
                        en_name = "four";
                        break;

                case '5':
                        en_name = "five";
                        break;

                case '6':
                        en_name = "six";
                        break;

                case '7':
                        en_name = "seven";
                        break;

                case '8':
                        en_name = "eight";
                        break;

                case '9':
                        en_name = "nine";
                        break;

                default:
                        en_name = "unknown case";
                        break;
        }

        return en_name;
}