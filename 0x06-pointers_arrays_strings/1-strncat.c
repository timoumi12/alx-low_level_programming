#include "main.h"

/**
 * _strncat - concatenate
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}


