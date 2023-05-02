#include "lists.h"

/**
 * add_nodeint_end - print elements
 * @head: linked_list
 * @n: int
 * Return: listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux;
	listint_t *end;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	(*end).next = NULL;
	(*end).n = n;
	if (*head == NULL)
		*head = end;
	else
	{
		aux = *head;
		while ((*aux).next)
			aux = (*aux).next;
		(*aux).next = end;
	}
	return (*head);
}

