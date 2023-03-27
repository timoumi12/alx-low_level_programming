#include "main.h"

/**
 * swap_int - change value
 * @a: int
 * @b: int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
