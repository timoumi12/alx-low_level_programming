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
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;

	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = *end;
		*end = temp;
		end--;
	}
}

