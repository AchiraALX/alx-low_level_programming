#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted
 * array of integers using binary search algorithm
 *
 * @array: pointer to the first element of the array
 * to search in
 * @size: size of the array
 * @value: value to search
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    if (!array)
    {
        return (-1);
    }

    while (left <= right)
    {
        printf("Searching in array: ");
        for (mid = left; mid < right; mid++)
        {
            printf("%d ", array[mid]);
        }

        printf("%d\n", array[mid]);

        mid = left + (right -left) / 2;

        if (array[mid] == value)
        {
            return (value);
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return (-1);
}
