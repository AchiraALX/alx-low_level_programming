#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}