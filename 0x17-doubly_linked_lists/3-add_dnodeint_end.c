#include "lists.h"

/**
 * add_dnodeint_end - prints list
 * @head: dlistint_t
 * @n: int
 * Return: Nb of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
