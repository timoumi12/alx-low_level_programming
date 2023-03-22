#include "main.h"

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
