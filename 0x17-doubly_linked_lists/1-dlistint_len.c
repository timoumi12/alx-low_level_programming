#include "lists.h"

/**
 * dlistint_len - prints list
 * @h: dlistint_t
 * Return: Nb of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
