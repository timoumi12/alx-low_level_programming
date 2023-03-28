#include "main.h"

/**
 * puts2 - prints even caracters
 * @str: string
 *
 * Return: always void
*/
void puts2(char *str)
{
	while (*str != '\n')
	{
		if (*str == '0' || *str == '2' || *str == '4' || *str == '6' || *str == '8')
			_putchar(*str);
	}
	_putchar('\n');
}
