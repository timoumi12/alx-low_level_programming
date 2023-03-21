#include <stdio.h>

/**
 * _islower - whatever
 * @c: input
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	char a;

	a = 'a';
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
