#include "main.h"

/**
 * rev_string - change value
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	char *p;
	char aux;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	p = s - 1;
	for (i = 0; i < len / 2; i++)
	{
		aux = *s;
		*s = *p;
		*p = aux;
		s++;
		p--;
	}
}

