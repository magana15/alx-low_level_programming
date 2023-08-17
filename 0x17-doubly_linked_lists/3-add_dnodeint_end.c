#include "lists.h"

/**
 * add_dnodeint_end - Add new node at the end of the dlistint_t list
 * @head: the head of the list
 * @n: The value of the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
