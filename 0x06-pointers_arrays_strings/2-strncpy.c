#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	while (n > 0 && *src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
		n--;
	}
	return (dest);
}

