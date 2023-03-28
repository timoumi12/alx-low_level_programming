#include "main.h"

/**
 * print_rev - change value
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i] + '0');
	_putchar('\n');
}
