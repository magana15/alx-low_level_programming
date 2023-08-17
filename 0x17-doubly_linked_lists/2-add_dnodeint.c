#include "lists.h"

/**
 * add_dnodeint - Add new node at beginning of the dlistint_t list
 * @head: the head of the list
 * @n: value of the new node
 *
 * Return: The address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
