#include "main.h"

/**
 * print_last_digit - whatever
 * @x: input
 *
 * Return: last digit of input
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = x * -1;
	x = x % 10;
	_putchar(x);
	return (x);
}
