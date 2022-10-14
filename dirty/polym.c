#include "head.h"

/**
 * poly - evaluates a polynomial given x
 * 
 * @x: type float
 * 
 * Return: solution to polynomial
*/

float poly(float x)
{
    float result;

    result = (3 * (pow(x, 3))) - (5 * (pow(x, 2))) + 6;

    return result;
    
}