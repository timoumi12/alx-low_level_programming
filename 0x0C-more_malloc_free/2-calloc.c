#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res = malloc(nmemb * size);
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;
	return (res);
}

