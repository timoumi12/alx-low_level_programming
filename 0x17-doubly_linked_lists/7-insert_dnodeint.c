#include "lists.h"

/**
 * insert_dnodeint_at_index - prints list
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: Nb of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int p = 0;

	if (idx == 0)
	{
		new = add_dnodeint(&(*h), n);
		return (new);
	}
	while (current)
	{
		if ((idx - 1) == p)
		{
			if (!current->next)
			{
				new = add_dnodeint_end(&(*h), n);
				return (new);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->prev = current;
				new->next = current->next;
				current->next->prev = new;
				current->next = new;
				return (new);
			}
		}
		current = current->next;
		p++;
	}
	return (NULL);
}
