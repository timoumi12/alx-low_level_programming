#include "lists.h"

/**
 * add_nodeint - print elements
 * @h: linked_list
 * Return: size_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	(*aux).next = *head;
	(*aux).n = n;
	*head = aux;
	return (*head);
}

