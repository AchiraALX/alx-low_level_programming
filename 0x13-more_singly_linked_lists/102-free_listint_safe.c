#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: pointer to the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	return (count);
}
