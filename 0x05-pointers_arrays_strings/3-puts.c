#include "main.h"

/**
 * _puts - change value
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
