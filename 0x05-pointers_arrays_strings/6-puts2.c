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
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
