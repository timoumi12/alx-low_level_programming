#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: buffer
 * @accept: char
 *
 * Return: int
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

