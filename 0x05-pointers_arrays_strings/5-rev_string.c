#include "main.h"

/**
 * rev_string - change value
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, i, j;
	char aux;

	len = _strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
}

