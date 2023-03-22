#include <stdio.h>
#include "main.h"

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
