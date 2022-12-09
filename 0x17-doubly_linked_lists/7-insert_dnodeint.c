#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the head of the list
 *
 * @idx: index of the list where the new node should be added
 *
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*h)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp)
	{
		if (i == idx)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			if (new->prev)
				new->prev->next = new;
			else
				*h = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		new->prev = tmp;
		new->next = NULL;
		tmp->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
