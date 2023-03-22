#include "main.h"

/**
 * print_last_digit - whatever
 * @x: input
 *
 * Return: last digit of input
 */
int print_last_digit(int x)
{
	int r;

	if (x < 0)
		x = x * -1;
	r = x % 10;
	_putchar(r);
	return (r);
}
