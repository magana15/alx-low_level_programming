#include "lists.h"

/**
 * dlistint_len - Return no of elements in the linked dlistint_t list
 * @h: the list
 *
 * Return: The no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
