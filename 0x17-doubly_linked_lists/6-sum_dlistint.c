#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in the dlistint_t list
 * @head: head of the list
 *
 * Return: sum of the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
