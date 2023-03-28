#include "main.h"

/**
 * rev_string - change value
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int len, i;
	char *end = s;

	len = 0;
	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = *end;
		*end = temp;
		end--;
	}
}

