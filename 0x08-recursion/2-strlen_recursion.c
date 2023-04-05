#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 *
 * Return: void
*/
int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
	
}

