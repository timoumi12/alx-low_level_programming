#include "main.h"

/**
 * reverse_array - compare
 * @a: array
 * @n: int
 *
 * Return: int
*/

void reverse_array(int *a, int n)
{
	int i, j, aux;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}

