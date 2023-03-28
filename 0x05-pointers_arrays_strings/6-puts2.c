#include "main.h"

/**
 * puts2 - prints even caracters
 * @str: string
 *
 * Return: always void
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '.')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
