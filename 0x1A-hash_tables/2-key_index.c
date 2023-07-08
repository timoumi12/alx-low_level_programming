#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hv = hash_djb2(key);
	unsigned long int index = hv % size;

	return (index);
}
