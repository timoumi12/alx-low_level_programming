#include "lists.h"

/**
 * sum_dlistint - prints list
 * @head: dlistint_t
 * Return: Nb of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int n = 0;

	while (current)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
