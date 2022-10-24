#include "limits.h"

/**
 * list_len - get the number of elements in list_t
 *
 * @h: pointer to list_t
 *
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
        size_t i = 0;

        while (h != NULL)
        {
                h = h->next;
                i++;
        }

        return (i);
}
