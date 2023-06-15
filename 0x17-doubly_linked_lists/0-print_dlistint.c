#include "lists.h"

/**
 * print_dlistint - prints list
 * @h: dlistint_t
 * Return: Nb of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int n = 0;
	while(current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
