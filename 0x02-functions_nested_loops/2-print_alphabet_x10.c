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
		putchar(a);
		a++;
	}
	putchar('\n');
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
	return (0);
}
