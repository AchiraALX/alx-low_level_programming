#include "search_algos.h"

/**
 * linear_search - search for value in an array
 *
 * @array: array of values
 *
 * @size: size of the array
 *
 * @value: the value to be searched
 *
 * Return: index of the value
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL) {
        return (-1);
    }

    for (i = 0; i < size; i++)
    {
        printf("Value checked array [%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }

    return (-1);
}
