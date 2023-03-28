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
	int j;

	len = 0;
	*p = *s;
	while (*s != '\0')
	{
		len++;
		p++;
	}
	p = s - 1;
	for (i = 0, j = len - 1; i < j; i++, j--) {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
}

