#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + ++i);
	_putchar(*(s + i));
}

