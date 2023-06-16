#include "lists.h"

/**
 * get_dnodeint_at_index - prints list
 * @head: dlistint_t
 * @index: unsigned int
 * Return: Nb of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int n = 0;

	while (current)
	{
		if (index == n)
			return (current);
		current = current->next;
		n++;
	}
	return (NULL);
}
