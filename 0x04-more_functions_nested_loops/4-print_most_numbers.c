#include "main.h"

/**
 * print_numbers - print 0~9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	if (i == 2 || i == 4)
	{
		continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
