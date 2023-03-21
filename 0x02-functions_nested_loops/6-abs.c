#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - whatever
 * @x: input
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _abs(int x)
{
	return (abs(x));
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
