#include "main.h"

/**
 * _strchr - gets the length of a prefix substring
 * @s: buffer
 * @accept: char
 *
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

