#include "main.h"

/**
 * print_binary - binary to unit
 * @n: long int
 * Return: void
*/

void print_binary(unsigned long int n)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

