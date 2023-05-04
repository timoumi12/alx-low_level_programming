#include "main.h"

/**
 * binary_to_uint - binary to unit
 * @b: char*
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int b10 = 0, p;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}

	for (p = 1, n--; n >= 0; n--, p *= 2)
	{
		if (b[n] == '1')
			b10 += p;
	}

	return (b10);
}

