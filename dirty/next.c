#include "head.h"

/**
 * next - finds the next larges even multiple
 * 
 * Return: next_largest multiple
*/

int next(int i, int j)
{
    /**
     * next_multiple = i + j - i % j
    */
    return (i + j - i % j);
    
}