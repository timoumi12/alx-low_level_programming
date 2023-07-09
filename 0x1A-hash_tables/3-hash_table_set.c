#include "hash_tables.h"

/**
 * hash_table_set - adds an element
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	new = malloc(sizeof(hash_node_t);
	if (new == NULL)
		return (NULL);

	new->value = strdup((char* )value);
	new->key = strdup((char *)key);
	new->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next;
			ht->array[index] = new;
			_free(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
			current = current->next;
		if (strcmp(current->key, key) == 0)
		{
			new->next = current->next->next;
			_free(current->next);
			current->next = new;
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}
