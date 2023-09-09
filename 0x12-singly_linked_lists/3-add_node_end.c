#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy, *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str(len))
		len++;
	new->len = len;
	new->next = NULL;
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	copy = *head;
	while (copy->next)
		copy = copy->next;
	copy->next = new;
	return (new);
}
