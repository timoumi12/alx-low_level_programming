#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsigned int
*/

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}

