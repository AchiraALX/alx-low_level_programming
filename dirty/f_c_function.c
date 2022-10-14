#include "head.h"

/**
 * f_c - converts F to C
 * 
 * Return: returns degrees celsius
*/

double f_c(double set)
{
    double c;

    c = (set - 32) / 1.8;

    return c;
}