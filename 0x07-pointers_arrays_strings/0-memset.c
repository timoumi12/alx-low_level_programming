#include "main.h"

/**
 * _memset - fills memory
 * @s: buffer
 * @b: char
 * @n: unsigned int
 *
 * Return: buffer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

