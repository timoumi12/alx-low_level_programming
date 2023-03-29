#include "main.h"
#include <stdio.h>

/**
 * print_array - prints
 * @a: array of int
 * @n: int
 *
 * Return: always void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
