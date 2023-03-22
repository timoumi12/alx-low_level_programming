#include <stdio.h>

/**
 * print_alphabet - whatever
 *
 * Return: always void
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
