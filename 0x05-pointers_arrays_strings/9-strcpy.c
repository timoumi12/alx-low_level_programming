#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints
 * @dest: destination
 * @src: source
 *
 * Return: always void
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
