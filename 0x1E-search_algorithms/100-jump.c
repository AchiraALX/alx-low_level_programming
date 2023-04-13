#include "search_algos.h"
/**
 * jump_search - use jump search algorithm to search for a value
 * in a sorted array
 *
 * @array: array
 * @size: size of the sorted array
 * @value: value to be searched for
 *
 * Return: index of value
 */

int jump_search(int *array, size_t size, int value)
{
    int jump;
    int left;
    int right;
    int i;

    if (array == NULL)
    {
        return (-1);
    }

    jump = pow(size, 0.5);
    left = 0;
    right = jump;

    while (right < (int)size && array[right] < value)
    {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    for (i = left; i <= right && i < (int)size; i++)
    {
        printf("Value checked array [%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return i;
        }
    }

    return -1;
}
