#include "lists.h"

/**
 * print_listint - print elements
 * @h: linked_list
 * Return: size_t
*/

size_t print_listint(const listint_t *h)
{
	listint *aux;
	size_t n = 0;

	aux = h;
	while ((*aux).next != NULL)
	{
		printf("%d\n", (*aux).n);
		n++;
		aux = (*aux).next;
	}
	free(aux);
	return (n);
}
