#include "main.h"

/**
 * _strncpy - compare
 * @s1: string
 * @s2: string
 *
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}

