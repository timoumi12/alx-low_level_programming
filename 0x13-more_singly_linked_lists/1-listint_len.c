#include "lists.h"

/**
 * print_listint - print elements
 * @h: linked_list
 * Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = (*h).next;
	}
	return (n);
}

