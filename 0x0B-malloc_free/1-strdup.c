#include "main.h"

/**
 * _strdup - return a copy
 * @str: char
 *
 * Return: string
*/

char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL || s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s = malloc(sizeof(char) * i);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = str[i];
	return (s);
}

