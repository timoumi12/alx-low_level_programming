#include "main.h"

/**
 * print_alphabet_x10 - whatever
 *
 * Return: always void
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
