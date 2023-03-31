#include "main.h"

/**
 * _strcat - concatenate
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

