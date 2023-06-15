#include "lists.h"

/**
 * dlistint_len - prints list
 * @h: dlistint_t
 * Return: Nb of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int n = 0;

	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
