#include <stdio.h>
#include <stdlib.h>

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
	printf("%d", r);
	return (r);
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
