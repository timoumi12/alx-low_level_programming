#include "main.h"

/**
 * _strcat - concatenate
 * @dest: string
 * @src: string
 *
 * Return: string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
