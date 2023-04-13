#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: stirng
 * @s2: string
 * @n: unsigned int
 * Return: string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	res = malloc(sizeof(char) * (n + i + 1));
	if (res == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		res[j] = s1[j];
	i = 0;
	x = j;
	while ((i < n) && (s2[i] != '\0'))
	{
		res[x] = s2[i];
		i++;
		x++;
	}
	res[x] = '\0';
	return (res);
}

