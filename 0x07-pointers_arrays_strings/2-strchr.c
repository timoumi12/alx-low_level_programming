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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

