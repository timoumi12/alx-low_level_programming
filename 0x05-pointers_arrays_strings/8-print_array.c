#include "main.h"

/**
 * print_array - prints
 * @a: array of int
 * @n: int
 *
 * Return: always void
*/
void print_array(int *a, int n)
{
	int len = 0, i, start;

	for (i = 0; i < n; i++)
	{
		if (i == n)
			_putchar(a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
