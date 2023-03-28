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
	char *p;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	p = s - 1;
	while (len > 0)
	{
		_putchar(*p);
		p--;
		len--;
	}
	_putchar('\n');
}
