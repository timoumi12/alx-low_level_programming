#include "main.h"

/**
 * _strlen - change value
 * @s: int
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		*(s++);
		i++;
	}
	return (i);
}
