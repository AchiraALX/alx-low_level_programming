#include "head.h"

/**
 * main - converts degrees fahrenheit(F) to degrees Celsius(C)
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
    double set;
    float cel;
    set = 32;
    cel = f_c(set);

    printf("%f f is equal to %.2f\n", set, cel);

    if (cel == 0.0)
    {
        printf("Worked baby!!");
        return (0);
    }
    
    else
    {
        printf("Not quite expected. Try again!");
        return (1);
    }

}