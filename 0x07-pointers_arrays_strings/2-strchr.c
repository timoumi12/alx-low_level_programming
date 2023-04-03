#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: buffer
 * @c: char
 *
 * Return: buffer
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

