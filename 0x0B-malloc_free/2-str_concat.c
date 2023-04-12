#include "main.h"

/**
 * str_concat - return a copy
 * @s1: string
 * @s2: string
 *
 * Return: string
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	res = malloc(sizeof(char) * (i + j + 1));
	if (res == NULL)
		return (NULL);
	i = j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		res[i] = s2[j];
		i++;
	}
	res[i] = '\0';
	return (res);
}

